#include "gigasecond.h"

namespace gigasecond {
    boost::posix_time::ptime advance(boost::posix_time::ptime content){
        return content + boost::posix_time::seconds(1000'000000);
    }
}  // namespace gigasecond
