#include "common.h"
#include <QTime>

int64_t getCurrentTimeInMs()
{
    QTime current_time =QTime::currentTime();
    int hour = current_time.hour();
    int minute = current_time.minute();
    int second = current_time.second();
    int msec = current_time.msec();

    return (hour * 60 * 60 * 1000 + minute * 60 * 1000 + second * 1000 + msec);
}
