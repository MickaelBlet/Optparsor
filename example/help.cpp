#include <iostream>

#include "mblet/argparsor.h"

int main(int argc, char* argv[]) {
    mblet::Argparsor args(false);
    args.addArgument(args.vector("-h", "--help")).action(mblet::Argparsor::HELP).help("custom help option message");
    args.parseArguments(argc, argv);
    return 0;
}