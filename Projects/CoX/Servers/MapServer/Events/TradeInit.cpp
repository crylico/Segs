/*!
 * @addtogroup MapServerEvents Projects/CoX/Servers/MapServer/Events
 * @{
 */

#include "TradeInit.h"
#include "MapEvents.h"


TradeInit::TradeInit(uint32_t db_id)
    : GameCommand(MapEventTypes::evTradeInit)
    , m_db_id(db_id)
{
}

void TradeInit::serializeto(BitStream& bs) const {
    bs.StorePackedBits(1, type() - MapEventTypes::evFirstServerToClient);
    bs.StorePackedBits(1, m_db_id);
}

//! @}
