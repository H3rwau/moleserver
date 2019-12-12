#ifndef _C_DEFINES_H_INCLUDE_
#define _C_DEFINES_H_INCLUDE_

#include "../../include/molnet/Network.h"

#include "../../include/Common/ccommon.h"
#include "../../include/Common/defines.h"
#include "../../include/Common/Player.h"
#include "../../include/Common/Room.h"
#include "../../include/Common/ServerServiceManager.h"
#include "../../include/Common/Robotlogicframe.h"
#include "../../include/Common/serverlogicframe.h"

#include <jsoncpp/json/json.h>

using namespace network;

#define IDD_MESSAGE_ROOM_FAPAI      IDD_MESSAGE_ROOM+1         // 发牌消息
#define IDD_MESSAGE_ROOM_XIAZHU     IDD_MESSAGE_ROOM+2         // 下注消息 
#define IDD_MESSAGE_ROOM_GAMEEND    IDD_MESSAGE_ROOM+3         // 结算消息
#define IDD_MESSAGE_ROOM_ENTERGAME  IDD_MESSAGE_ROOM+4         // 进入游戏消息
#define IDD_MESSAGE_ROOM_STARTXIAZHU  IDD_MESSAGE_ROOM+5         // 开始下注消息
#define IDD_MESSAGE_ROOM_REENTERGAME IDD_MESSAGE_ROOM+6        // 重回房间
#define IDD_MESSAGE_ROOM_SHANGZHUANG IDD_MESSAGE_ROOM+7         // 上庄
#define IDD_MESSAGE_ROOM_XIAZHUANG   IDD_MESSAGE_ROOM+8         // 下庄
#define IDD_MESSAGE_ROOM_GETZHUANGLIST IDD_MESSAGE_ROOM+9       // 得到装列表
#define IDD_MESSAGE_ROOM_SUERCONTROL IDD_MESSAGE_ROOM+10        // 控制出牌
#define IDD_MESSAGE_ROOM_CLEARJETTON IDD_MESSAGE_ROOM+11        // 清除下注

enum tagCarType
{
	CARTYPE_FALALI = 0,                  // 法拉利
	CARTYPE_LANBOJILI,                   // 兰博基尼
	CARTYPE_MASAILADI,                   // 玛莎拉蒂
	CARTYPE_BAOSHIJIE,                   // 保时捷
	CARTYPE_BENCI,                       // 奔驰
	CARTYPE_BAOMA,                       // 宝马
	CARTYPE_AODI,                        // 奥迪
	CARTYPE_DAZONG,                      // 大众
	CARTYPE_NULL
};

/** 
 * 游戏阶段
 */
enum GameState
{
	STATE_XIAZHU = 0,          // 下注状态
	STATE_GAMING,              // 游戏状态
	STATE_GAMEEND,             // 游戏结束状态
	STATE_NULL
};


#endif
