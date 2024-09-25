#define PIN_LED 7

void setup() {
  // LED 핀을 출력모드로 설정
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 처음에 LED 켜진 상태로 유지 (1초)
  digitalWrite(PIN_LED, HIGH); 
  Serial.println(1);
  delay(1000); // 1초 동안 켜진 상태 유지

  // LED를 5번 깜빡이게 함
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, LOW);  // LED를 끔
    Serial.println(0);
    delay(100);
    digitalWrite(PIN_LED, HIGH); // LED를 킴
    Serial.println(1);
    delay(100);
  }

  // 5번 깜빡인 후 LED를 끄고 그 상태로 유지
  digitalWrite(PIN_LED, LOW); 
  Serial.println(0);

  // 무한 루프: LED가 꺼진 상태를 유지
  while (1) {
    delay(1000); // 불필요한 과부하 방지
  }
}
