#pragma once

#include <regex>
#include <string>

class ArgumentsParser {
public:
  struct Arguments {
    bool Valid = true; // Whether or not the parse was successful
    std::string ConnectionString;
  };

  Arguments Parse(int argc, char **argv);

private:
  static std::regex ConnectionStringRegex;

  static Arguments InvalidArguments;

  Arguments invalidArguments();
  bool validateConnectionString(std::string connectionString);
};
