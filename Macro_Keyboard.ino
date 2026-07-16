#include <Keyboard.h>

const int buttonPin1 = 2;  // İlk buton dijital pin 2'de
const int buttonPin2 = 3;  // İkinci buton dijital pin 3'te
const int buttonPin3 = 4;  // İkinci buton dijital pin 4'te
const int buttonPin4 = 5;  // İlk buton dijital pin 5'de
const int buttonPin5 = 6;  // İkinci buton dijital pin 6'te
const int buttonPin6 = 7;  // İkinci buton dijital pin 7'te

int buttonState1 = 0;  // İlk butonun durumu
int buttonState2 = 0;  // İkinci butonun durumu
int buttonState3 = 0;  // üçüncü butonun durumu
int buttonState4 = 0;  // dördüncü butonun durumu
int buttonState5 = 0;  // beşinci butonun durumu
int buttonState6 = 0;  // altıncı butonun durumu


void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);  // İlk buton için pin giriş olarak ayarlanıyor
  pinMode(buttonPin2, INPUT_PULLUP);  // İkinci buton için pin giriş olarak ayarlanıyor
  pinMode(buttonPin3, INPUT_PULLUP);  // üçüncü buton için pin giriş olarak ayarlanıyor
  pinMode(buttonPin4, INPUT_PULLUP);  // dördüncü buton için pin giriş olarak ayarlanıyor
  pinMode(buttonPin5, INPUT_PULLUP);  // beşinci buton için pin giriş olarak ayarlanıyor
  pinMode(buttonPin6, INPUT_PULLUP);  // altıncı buton için pin giriş olarak ayarlanıyor
  Keyboard.begin();  // Klavye işlevselliği başlatılıyor
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);  // İlk butonun durumu okunuyor
  buttonState2 = digitalRead(buttonPin2);  // İkinci butonun durumu okunuyor
  buttonState3 = digitalRead(buttonPin3);  // üçüncü butonun durumu okunuyor
  buttonState4 = digitalRead(buttonPin4);  // İlk butonun durumu okunuyor
  buttonState5 = digitalRead(buttonPin5);  // İkinci butonun durumu okunuyor
  buttonState6 = digitalRead(buttonPin6);  // üçüncü butonun durumu okunuyor


  // Eğer ilk butona basılmışsa (LOW durumda)
  if (buttonState1 == LOW) {
    // 1977GD1984 yaz ve Enter'a bas
    Keyboard.print("");
    Keyboard.write(KEY_RETURN);  // Enter tuşuna bas
    delay(500);  // Tuşu bırakmadan önce biraz bekle
  }

  // Eğer ikinci butona basılmışsa (LOW durumda)
  if (buttonState2 == LOW) {
    // Windows + R tuşlarına bas
    Keyboard.press(KEY_LEFT_GUI);  // Windows tuşuna bas
    Keyboard.press('r');           // 'R' tuşuna bas
    delay(100);                    // Kısa bir süre bekle
    Keyboard.releaseAll();         // Windows ve R tuşlarını bırak

    delay(500);  // "Çalıştır" penceresinin açılması için bekle

    // www yaz
    Keyboard.print("www");

    // . (nokta) yaz (ASCII kodu: 47)
    Keyboard.write(47);

    // facebook yaz
    Keyboard.print("youtube");

    // . (nokta) yaz (ASCII kodu: 47)
    Keyboard.write(47);

    // com yaz
    Keyboard.print("com");

    // Enter tuşuna bas
    Keyboard.write(KEY_RETURN);  // Enter tuşuna bas
    delay(500);  // Tuşu bırakmadan önce biraz bekle
  }

  delay(100);  // Düğmeye tekrar basılmadan önce biraz bekle

  if(buttonState3 == LOW) {
    Keyboard.press(KEY_LEFT_ALT); // ALT tuşuna bas
    delay(100);
    Keyboard.press(KEY_TAB); // TAB tuşuna bas
    delay(100);
    Keyboard.release(KEY_TAB); // TAB tuşunu bırak
    delay(100);
    Keyboard.release(KEY_LEFT_ALT); // ALT tuşunu bırak
    
    delay(500); // Biraz bekle, hızlı geçişi önle
  }

  if(buttonState4 == LOW) {
    Keyboard.press(KEY_LEFT_GUI);  // Windows tuşuna bas
    Keyboard.press('r');           // 'R' tuşuna bas
    delay(100);                    // Kısa bir süre bekle
    Keyboard.releaseAll();         // Windows ve R tuşlarını bırak

    delay(500);  // "Çalıştır" penceresinin açılması için bekle

    // egemen yaz
    Keyboard.print("egemen");

    // . (nokta) yaz (ASCII kodu: 47)
    Keyboard.write(47);

    // tugberkcelebi yaz
    Keyboard.print("tugberkceleb");

        // . (i) yaz (ASCII kodu: 105)
    Keyboard.write(105);

    // . (nokta) yaz (ASCII kodu: 47)
    Keyboard.write(47);

    // com yaz
    Keyboard.print("com");

    // . (nokta) yaz (ASCII kodu: 47)
    Keyboard.write(47);

        // tr yaz
    Keyboard.print("tr");

    // Enter tuşuna bas
    Keyboard.write(KEY_RETURN);  // Enter tuşuna bas
    delay(500);  // Tuşu bırakmadan önce biraz bekle
  }
}

