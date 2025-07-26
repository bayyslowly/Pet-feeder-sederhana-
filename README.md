🐾 Pet Feeder dengan ESP32
Proyek ini adalah tempat makan otomatis untuk hewan peliharaan 🐱🐶 yang dapat dikontrol dengan tombol fisik, dan dilengkapi sensor ultrasonik untuk mendeteksi sisa makanan. Dibuat menggunakan ESP32, servo motor, dan sensor HC-SR04.

📦 Fitur
✅ Servo motor untuk membuka/tutup penutup makanan

🟡 Tombol fisik untuk memicu pemberian makan secara manual

📏 Sensor ultrasonik untuk mengukur sisa makanan

📟 Menampilkan status melalui Serial Monitor

🌐 (Opsional) Bisa dikembangkan menjadi IoT (kontrol via internet/web)

🧰 Komponen
Komponen	Jumlah
ESP32	1
Servo Motor (SG90)	1
Push Button	1
Resistor 10K	1
Sensor Ultrasonik HC-SR04	1
Breadboard & Kabel jumper	secukupnya

🔌 Wiring / Pin
Komponen	ESP32 Pin
Servo (Signal)	D18
Tombol	D12
HC-SR04 TRIG	D5
HC-SR04 ECHO	D4
