#ifndef LOGGER_H
#define LOGGER_H

namespace L3SoftCore
{

enum class ELog
{
    InvalidReplyPacket,
    InternalError,
    Number // This represents the total number of enum values and should always be last
};

    /**
     * @brief Send a log to the purple CPU.
     * @param log - enum of the log that is sent.
     * @return true on success, false otherwise.
     */
    bool SendLog(ELog log);

} // L3SoftCore

#endif // LOGGER_H