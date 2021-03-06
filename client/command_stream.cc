#include "command_stream.h"

#include <iostream>

bool CommandStream::ReadCommandLine() {
  std::cout << ":: ";
  getline(std::cin, commandline);
  commandStream.clear();
  commandStream.str(commandline);
  commandStream >> command;
  return IsGood();
}

std::string CommandStream::ReadLine() {
  getline(std::cin, commandline);
  return commandline;
}

std::string CommandStream::CommandLine() {
  return commandStream.str();
}

std::string CommandStream::Command() {
  return command;
}

std::string CommandStream::Argument() {
  commandStream >> argument;
  return argument;
}

bool CommandStream::IsGood() {
  if (!commandStream) {
    std::cout << "Unfamiliar command form: " << commandStream.str() << std::endl;
  }
  return !!commandStream;
}
