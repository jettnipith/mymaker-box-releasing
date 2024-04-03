void walk(int speedL, int speedR, int timing) {
  Motor(speedL, speedR);
  delay(timing);
}

void drop_to_A(char side) {
  if (side == "l") {
    //เลี้ยวซ้าย 
    walk(-40, 40, 300);
    //เดินเข้าจุดปล่อย
    walk(40,40,300);
    //ดีดลูกบาศก์
    servo(23, 90);
    //ชักกลับ
    servo(23, 0);
  } else if (side == "r") {
    //เลี้ยวขวา
    walk(40, -40, 300);
    //เดินเข้าจุดปล่อย
    walk(40,40,300);
    //ดีดลูกบาศก์
    servo(23, 90);
    //ชักกลับ
    servo(23, 0);
  }

}
