#include <Arduino.h>
//ロードセルのキャリブレーション
//重さが既知の物体をロードセルにのせる
//ロードセルのアナログの値を読む
//縦軸が重さ、横軸がアナログ値となるようにグラフ作成
//直線近似する
//重さ＝f(アナログ値)
float analog_to_weight_g(float analog_value)
{
  return 38.187 * analog_value - 9470.5;
}

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  float value = analogRead(A0);
  float weight = analog_to_weight_g(value);
  Serial.print(weight);
  Serial.print(", ");
  Serial.println(value);
  delay(100);
}