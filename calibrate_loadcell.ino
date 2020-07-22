#include <Arduino.h>
//ロードセルのキャリブレーション
//重さが既知の物体をロードセルにのせる
//ロードセルのアナログの値を読む
//縦軸が重さ、横軸がアナログ値となるようにグラフ作成
//直線近似する
//重さ＝f(アナログ値)

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.println(analogRead(A0));
  delay(500);
}