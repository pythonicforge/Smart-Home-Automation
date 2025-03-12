# 🌟 _Smart Home Automation with LDR, Temperature Sensor & LCD Display_  

This project showcases a **Smart Home Automation System** using an **LDR (Light Dependent Resistor), TMP36 Temperature Sensor, and a 16x2 I2C LCD Display** to control an **LED (automatic night lighting), a fan (temperature-based cooling), and display real-time sensor readings.**  

### 🚀 Features  
✅ **Automatic night light** using an LDR  
✅ **Temperature-based fan control** with a TMP36 sensor  
✅ **Live sensor readings displayed on a 16x2 LCD**  
✅ **Real-time debugging via Serial Monitor**  
✅ Adjustable threshold values for **customization**  

### 🔧 Components Used  
- **LDR (Photoresistor)** – Detects ambient light levels  
- **TMP36 Temperature Sensor** – Measures surrounding temperature  
- **16x2 I2C LCD Display** – Shows live sensor readings  
- **LED** – Turns on when it’s dark  
- **Fan (Motor)** – Activates when temperature crosses a set threshold  
- **Arduino UNO R3** – Microcontroller to process inputs and control outputs  
- **Resistors & Wires** – For circuit connections  
- **I2C Module** – Enables LCD communication with fewer pins  

### 📜 Code Explanation  
- Reads **LDR & temperature sensor values** using `analogRead()`  
- Maps & processes sensor values for **LED & Fan control**  
- Displays sensor data on **LCD using I2C communication**  
- Uses **digitalWrite()** to toggle LED & Fan based on thresholds  
- Outputs real-time readings via **Serial Monitor**  

### 🔌 Circuit Connections  
| Component | Arduino Pin |
|-----------|------------|
| LDR       | A0         |
| TMP36     | A1         |
| LED       | 9          |
| Fan       | 5          |
| LCD (SDA) | A4         |
| LCD (SCL) | A5         |

### 📺 LCD Display Output  
The **16x2 LCD screen** will display:  
```
Temp: 26.4°C   
Light: 540 LUX  
```

### 🎯 How to Use  
1. **Upload the code** to your Arduino  
2. Adjust **lightThreshold** & **tempThreshold** if needed  
3. Open **Serial Monitor** for debugging  
4. **Observe** the LCD displaying real-time sensor values  
5. Watch the **LED & Fan operate automatically** based on environmental conditions  

### 📸 Simulation  
This project was built and tested in **TinkerCAD**. View or modify the simulation here:  
[🔗 TinkerCAD Link](https://www.tinkercad.com/things/1syJ0ihAiga-smart-light-and-fan-automation?sharecode=nxrHhSjw3-JQ8oMcYJHdpOPWFktW9LUOS0673Uy2-4E)  

## 📌 Future Improvements  
- **Add a DHT11 sensor** for humidity monitoring  
- **Integrate IoT connectivity** for remote monitoring & control  
- **Use relay modules** for real-world appliance control  
- **Upgrade LCD to an OLED display** for better readability  
<br/>

<br/>
<p align="center">
<i>Made with ❤️ by Hardik Jaiswal</i> <br>
<i>Exploring Embedded Systems & Smart Automation! 🚀</i>
</p>

<br/>
<p align="center">
<i>Made with ❤️ by Hardik Jaiswal</i> <br>
<i>Exploring Embedded Systems & Smart Automation! 🚀</i>
</p>