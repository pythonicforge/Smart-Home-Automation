# 🌟 _Smart Home Automation with LDR & Temperature Sensor_

This project demonstrates a simple **Smart Home Automation system** using an **LDR (Light Dependent Resistor)** and a **TMP36 Temperature Sensor** to control an **LED (for automatic night lighting)** and a **fan (for temperature-based cooling).**  

### 🚀 Features  
✅ Automatic night light using an LDR  
✅ Temperature-based fan control using a TMP36 sensor  
✅ Real-time sensor readings displayed via Serial Monitor  
✅ Adjustable threshold values for customization  

### 🔧 Components Used  
- **LDR (Photoresistor)** – Detects ambient light levels  
- **TMP36 Temperature Sensor** – Measures surrounding temperature  
- **LED** – Turns on when it's dark  
- **Fan (Motor)** – Activates when temperature crosses a set threshold  
- **Arduino UNO R3** – Microcontroller to process inputs and control outputs  
- **Resistors & Wires** – For circuit connections  

### 📜 Code Explanation  
- Reads LDR and temperature sensor values using **analogRead()**  
- Maps and processes sensor values for **LED & Fan control**  
- Uses **digitalWrite()** to toggle the LED and fan based on thresholds  
- Displays sensor readings in **Serial Monitor** for real-time debugging  

### 🔌 Circuit Connections  
| Component | Arduino Pin |
|-----------|------------|
| LDR       | A0         |
| TMP36     | A1         |
| LED       | 9          |
| Fan       | 5          |

### 📸 Simulation  
This project was built and tested in **TinkerCAD**. You can view or modify the simulation here: [🔗 TinkerCAD Link](https://www.tinkercad.com/things/1syJ0ihAiga-smart-light-and-fan-automation?sharecode=nxrHhSjw3-JQ8oMcYJHdpOPWFktW9LUOS0673Uy2-4E)  

### 🎯 How to Use  
1. Upload the code to your Arduino  
2. Adjust **lightThreshold** and **tempThreshold** if needed  
3. Open **Serial Monitor** to view real-time sensor readings  
4. Observe the LED and Fan operate automatically based on environmental conditions  

### 📌 Future Improvements  
- Add **OLED/LCD display** for better UI  
- Implement **relay modules** for real-world appliance control  
- Integrate **IoT connectivity** for remote monitoring & control  
<br/>
---
<br/>
<p align="center">
<i>Made with ❤️ by Hardik Jaiswal</i> <br>
<i>Exploring Embedded Systems & Smart Automation! 🚀</i>
</p>

