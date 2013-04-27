// THIS FILE IS AUTOGENERATED

#include <string>

#ifndef CTIMINGS_HPP
#define CTIMINGS_HPP

namespace freedm {
namespace broker {
 
class CTimings
{
public:
    static unsigned int GM_PHASE_TIME;

    static unsigned int GM_FID_TIMEOUT;

    static unsigned int SC_PHASE_TIME;

    static unsigned int RTDS_RUN_DELAY;

    static unsigned int GM_AYC_RESPONSE_TIMEOUT;

    static unsigned int GM_AYT_RESPONSE_TIMEOUT;

    static unsigned int CS_EXCHANGE_TIME;

    static unsigned int GM_GLOBAL_TIMEOUT;

    static unsigned int LB_GLOBAL_TIMER;

    static unsigned int GM_PREMERGE_MAX_TIMEOUT;

    static unsigned int CSRC_RESEND_TIME;

    static unsigned int GM_INVITE_RESPONSE_TIMEOUT;

    static unsigned int GM_PREMERGE_GRANULARITY;

    static unsigned int GM_PREMERGE_MIN_TIMEOUT;

    static unsigned int LB_STATE_TIMER;

    static unsigned int GM_CHECK_TIMEOUT;

    static unsigned int LB_SC_QUERY_TIME;

    static unsigned int CSUC_RESEND_TIME;

    static unsigned int GM_TIMEOUT_TIMEOUT;

    static unsigned int CSRC_DEFAULT_TIMEOUT;

    static unsigned int LB_PHASE_TIME;


    static void SetTimings(const std::string timingsFile);
};


}
}

#endif
