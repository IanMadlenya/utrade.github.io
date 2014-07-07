#ifndef SHARED_DEFINES_H
#define SHARED_DEFINES_H
#include <stdint.h>
#include <map>
#define EXCHANGE_ORDERID_SIZE 50
#define TRADEID_SIZE 50
#define SYMBOL_SIZE 24
#define SERIES_SIZE 20
#define API_REQUEST_SIZE 200

typedef uint8_t UNSIGNED_CHARACTER;
typedef uint16_t UNSIGNED_SHORT;
typedef uint32_t UNSIGNED_INTEGER;
typedef uint64_t UNSIGNED_LONG;
typedef int64_t SIGNED_LONG;
typedef std::map<UNSIGNED_LONG, UNSIGNED_LONG> MapULong;
typedef MapULong::const_iterator MapULongIter;


#define MARKET_DATA_DEPTH_MAX 11

#define stringify( name ) # name
#define varString(name) stringify(name)<<":"<<name

#define OMM_DUMP_LOGS 1
#define MKTDATA_EVENT 0
#define USE_EXCHANGE_ORDER_ID_FOR_REFERENCE 1

#endif
