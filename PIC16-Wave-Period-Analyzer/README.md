# PIC16 Wave Period Analyzer

An embedded systems application designed to analyze and calculate the period of incoming signals using a **PIC16 microcontroller**. This project showcases hardware-software interfacing, capture/compare peripherals, and real-time wave analytics for laboratory assignment **LE4-7**.

## 📂 Project Structure

The project directory consists of source code, workspace environments, and schematic simulation configurations:

* **`LE4-7.c`** – The primary C source code containing configurations, interrupt handling, and timer tracking.
* **`LE4-7.hex`** – Compiled binary executable file ready to be flashed onto the PIC16 hardware or loaded into a simulator.
* **`LE4-7.mcp`** – MPLAB IDE project configuration file.
* **`LE4-7.pdsprj`** – Proteus Design Suite schematic design file used for circuit layout and simulation.
* **`*.workspace`** – Local IDE workspace history and system configuration variables.

---

## 🛠️ Requirements & Tools

To view, simulate, or compile this project, you will need the following engineering software installed on your machine:

1. **Microchip MPLAB IDE (v8 or X)** – To view, edit, or rebuild the C firmware codebase.
2. **HI-TECH C Compiler / XC8** – For micro-controller machine target compilation.
3. **Proteus Design Suite** – To execute, debug, and monitor the hardware schematic diagram (`.pdsprj`) dynamically.

---

## 🚀 How to Run the Simulation

1. Clone or download this project subfolder into your local directory.
2. Launch **Proteus Design Suite** and open the schematic simulation layout file `LE4-7.pdsprj`.
3. Double-click the **PIC16 microcontroller component** within the schematic workspace grid.
4. Locate the **Program File** attribute field, click the folder icon, and point it to the compiled target file `LE4-7.hex`.
5. Press the **Play/Run** icon at the bottom-left corner of the Proteus window to begin real-time hardware execution and evaluation.

---

## 📝 Lab Overview (LE4-7)
This repository archives the experimental work completed for the **CPE3201 Embedded Systems Laboratory Module**. The implementation demonstrates proficiency in initializing hardware Timers, operating capture channels to log signal edges, and determining precise wave periods.
