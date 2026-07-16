# Macro-Keyboard
Bilgisayarınıza bağlayıp kısayol tuşlarını atayabileceğiniz bir macro keyboard

Fonksiyon Metodu,Açıklama,Örnek Kod Kullanımı
Keyboard.begin(),Klavye emülasyonunu başlatır. setup() içinde kullanılır.,Keyboard.begin();
Keyboard.print(),Belirtilen metni karakter karakter hızlıca yazar.,"Keyboard.print(""Merhaba Dunya"");"
Keyboard.println(),Metni yazar ve ardından Enter (satır sonu) tuşuna basar.,"Keyboard.println(""KullaniciAdi"");"
Keyboard.press(),Belirtilen tuşa basılı tutar (bırakmaz). Modifikatör tuşlar için idealdir.,Keyboard.press(KEY_LEFT_SHIFT);
Keyboard.release(),Basılı tutulan belirli bir tuşu serbest bırakır.,Keyboard.release(KEY_LEFT_SHIFT);
Keyboard.releaseAll(),Basılı tutulan tüm tuşları aynı anda serbest bırakır.,Keyboard.releaseAll();
Keyboard.write(),Bir tuşa basıp hemen bırakma işlemini tek seferde yapar.,Keyboard.write('A');
Keyboard.end(),Klavye bağlantısını sonlandırır.,Keyboard.end();
