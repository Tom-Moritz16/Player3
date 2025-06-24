#ifndef PURPLE_CPU_COMMUNICATION_H
#define PURPLE_CPU_COMMUNICATION_H

#include <cstdint>

namespace L3SoftCore
{

enum class EPurpleCPUCommand
{
    NoCommand
};

enum class EPurpleCPUCommunicationError
{
    Success,
    ErrorReading,
    ErrorWriting,
    ErrorParsingCommand
};

/**
 * Static class for communication with the purple CPU.
 */
class PurpleCPUCommunication
{
public:
    PurpleCPUCommunication() = delete;

    /**
     * @brief Read & parse command from Purple CPU.
     *
     * @param o_command - out parameter for the command given.
     * @return error code.
     */
    static EPurpleCPUCommunicationError ReadCommand(EPurpleCPUCommand o_command);

    /**
     * @brief Send data to the purple CPU.
     *
     * @param data - data to write back to the purple CPU.
     * @return true on success, false otherwise.
     */
    static EPurpleCPUCommunicationError Send(const uint8_t* data);
};

} // L3SoftCore

#endif // PURPLE_CPU_COMMUNICATION_H
