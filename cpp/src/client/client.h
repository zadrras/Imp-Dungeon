#ifndef IMPDUNGEON_CLIENT_CLIENT_H_
#define IMPDUNGEON_CLIENT_CLIENT_H_

#include <netinet/in.h>
#include <stdint.h>

#include "logic/network/serializer.h"

namespace impdungeon {

class Event;

class Client {
 public:
  Client(const std::string &ip, uint16_t port);
  virtual ~Client();

  void Init();
  void Run();
  void SendEvent(Event &event);

 private:
  struct sockaddr_in server_address_;
  int socket_;

  Serializer serializer_;
};

}  // namespace impdungeon

#endif  // IMPDUNGEON_CLIENT_CLIENT_H_

