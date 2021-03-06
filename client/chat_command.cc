#include "chat_command.h"

#include <thread>
#include <chrono>

#define POLL_RATE std::chrono::milliseconds(250)

void ChatCommand::Execute() {
  std::cout << "You are now in CHAT mode...\n";
  client.WhatsNew();
  CommandStream stream;
  std::string message;
  PollForNewMessages();
  while (true) {
    message = stream.ReadLine();
    client.Chat(message);
  }
}

void ChatCommand::PollForNewMessages() {
  std::thread([&] {
      while (true) {
        std::this_thread::sleep_for(POLL_RATE);
        client.WhatsNewPoll();
      }
    }).detach();
}
