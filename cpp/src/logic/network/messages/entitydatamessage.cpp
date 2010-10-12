#include "logic/network/messages/entitydatamessage.h"

#include "logic/network/messages/messagevisitorinterface.h"

namespace impdungeon {

EntityDataMessage::EntityDataMessage(Entity *entity) : entity_(entity) {

}

EntityDataMessage::~EntityDataMessage() {

}

void EntityDataMessage::Acccept(MessageVisitorInterface &message_visitor) {
  message_visitor.Visit(*this);
}

}  // namespace impdungeon
