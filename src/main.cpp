#include <WiFi.h>

void setup() {
  Serial.begin(115200);

  WiFi.begin("Wi-Fi.HK via HKU");
  while (WiFi.status() != WL_CONNECTED) {
    delay(250);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}
void loop() {

  delay(250);
}