#ifndef FACEBOOK_CLONE_SERVER_HEADER_GUARD
#define FACEBOOK_CLONE_SERVER_HEADER_GUARD
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <unistd.h>
#include <fb.grpc.pb.h>
#include <grpc++/grpc++.h>
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using namespace fb;


using namespace std;
#endif // FACEBOOK_CLONE_SERVER_HEADER_GUARD
