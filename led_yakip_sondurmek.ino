int led = 2; //2. pine bağladığımız ledimzi led ismi ile tanımladık.

void setup()// setup kısmına yazılan kodlar 1 defa çalışır
{
  pinMode(led, OUTPUT);//ledin bir çıkış elemanı olduğunu belirtiyoruz.
}

void loop()// loop kısmına yazılan kodlar sürekli tekrar eder
{
  digitalWrite(led, HIGH);//lede hıgh komutu ile enerji veriyoruz.
  delay(1000); //delay komutu ile 1 saniye bekletiyoruz
  digitalWrite(led, LOW);//ledin enerjisini low komutu ile kesiyoruz yani kapatıyoruz.
  delay(1000); //delay komutu ile 1 saniye bekletiyoruz
}