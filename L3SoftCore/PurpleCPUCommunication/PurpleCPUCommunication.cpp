#include "PurpleCPUCommunication.h"
#include <iostream>

namespace L3SoftCore
{
    EPurpleCPUCommunicationError PurpleCPUCommunication::ReadCommand(EPurpleCPUCommand o_command)
    {
	std::cout << "PurpleCPUCommunication::ReadCommand stub implementation" << std::endl;
	o_command = EPurpleCPUCommand::NoCommand;
	return EPurpleCPUCommunicationError::Success;
    }

    EPurpleCPUCommunicationError PurpleCPUCommunication::Send(const uint8_t* /*data*/)
    {
	std::cout << "PurpleCPUCommunication::Send stub implementation" << std::endl;
	return EPurpleCPUCommunicationError::Success;
    }
} // L3SoftCore
