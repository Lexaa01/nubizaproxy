#include "gt.hpp"
#include "packet.h"
#include "server.h"
#include "utils.h"

std::string gt::version = "4.55";
std::string gt::flag = "id";
bool gt::resolving_uid2 = false;
bool gt::connecting = false;
bool gt::in_game = false;
bool gt::ghost = false;

void gt::send_log(std::string text) {
    g_server->send(true, "action|log\nmsg|" + text, NET_MESSAGE_GAME_MESSAGE);
}
