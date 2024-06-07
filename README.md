# Sınav Notları Uygulaması

![image](https://github.com/isleyen/examNotes/assets/136992260/95de8f8d-4ecd-43b5-aca9-960aad58f940)

3 Adet seçeneğimiz var bunlar sırası ile şu şekilde çalışıyor:

![image](https://github.com/isleyen/examNotes/assets/136992260/44d6189a-a0b8-4099-8644-bca490b88bfa)

![image](https://github.com/isleyen/examNotes/assets/136992260/ccfdc9fc-a3af-489a-8b48-6e3e14527767)

## Kod Detaylarına Bakalım

__ogrenci.h__, __fonksiyonlar.h__, __fonksiyonlar.cpp__ ve __main.cpp__ üzerinden gideceğiz.

### ogrenci.h

![image](https://github.com/isleyen/examNotes/assets/136992260/d1fa3e85-792f-4703-a25e-44eead3c4e9f)

Burada *__varsayılan kurucu fonksiyon__* dediğimiz yapıyı kullandık.

Öğrenci nesnesi oluşturulduğu otomatik çağrılır.

*ad* ve *sinavNotu*'nu varsayılan olarak atadık.

> [!IMPORTANT]
> __Kurucu fonksiyonun adı__ ile __class adı__ aynı olmak ZORUNDADIR!

### fonksiyonlar.h

![image](https://github.com/isleyen/examNotes/assets/136992260/870d1088-a0b3-48ea-8a21-a6947542ab6e)

Kullandığımız *vektör* kütüphanesi eleman ekleme çıkartma ve saklama yapmamız için gereklidir. Birazdan kodumuzda oluşturacağımız ogrenciler.txt dosyasına eklemeler veya kaydetmeler yapmamız için gerekli.

Fanksiyonlarımızı tanımladık ve devam edebiliriz.

### fonksiyonlar.cpp

![image](https://github.com/isleyen/examNotes/assets/136992260/d0baa4e4-1b0a-418e-ada2-02fda30a7507)

Gerekli olan kütüphaneleri tanımlıyoruz. *fstream* bizim için önemli.

![image](https://github.com/isleyen/examNotes/assets/136992260/60f1c2c2-cdd5-481b-942a-2bf72f2eae73)

Kullanıcıdan gerekli bilgileri alıp vektörümüz ile oluşturacağımzı ogrenciler.txt (main.cpp de oluşturulacak olan ve bilgilerin saklanacağı metin belgesi) içerisine gönderir.

![image](https://github.com/isleyen/examNotes/assets/136992260/a03ee489-b796-4cf6-be47-8cf41924e729)

dosyayaKaydet fonksiyonumuzda ofstream satırı olan kodumuz ile önce bir metin belgesi oluşturulacak hazli hazırda varsa olan metin belgesine yazırılacak.

Ardından for döngüsü girilen tüm bilgileri gezip bunları dosya içerisine kaydedecek. outfile ile de çıkış yapacak.

![image](https://github.com/isleyen/examNotes/assets/136992260/8ebd168b-2fbd-473b-b0b9-b91d8e7935b1)

Dosyamızı açıkyor ve dosyada olan tüm bilgileri içeriye push ediyoruz ve kullanıcı *Ogrencileri Goster* seçeneğine bastığında önceden girilmiş bilgiler sisteme tekrar yükleniyor ve kullanıcı bunları görebiliyor.

![image](https://github.com/isleyen/examNotes/assets/136992260/c85dd749-e9a9-4f0f-8158-0e1551ab4594)

Burada da girilen öğrencileri for döngüsü ile isim ve notlarını alıp ekrana yazdırıyor.

### main.cpp

![image](https://github.com/isleyen/examNotes/assets/136992260/24682848-d9ea-4bc0-aa26-6ca4e85a3640)

Gerekli kütüphanelerimizi ve fonksiyonlarımız tanımlıyoruz.

![image](https://github.com/isleyen/examNotes/assets/136992260/707165bd-665c-4c2f-881a-9e4dcd3e5f31)

dosyadanOku() fonksiyonu ile ogrenciler dosyasının içerisine erişiyoruz.

![image](https://github.com/isleyen/examNotes/assets/136992260/cb4ec89e-02b0-4e82-82c3-d8268441660c)

*do-while* döngüsü ile kullanıcıya 3 rakamı dışında yaptığı seçimlerde sürekli değer döndüren bir döngü yazıyoruz.

İçeride de swich-case kullandık ve bazı komutları sayılara atadık.

Hedef dosyalar: __ogrenci.h__, __fonksiyonlar.h__, __fonksiyonlar.cpp__ ve __main.cpp__
