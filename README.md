# CNewbie Agent Ticket Booking

CNewbie Agent is a console-based C application for booking concert tickets, cinema tickets, and hotel rooms. The application also stores and displays purchase history.

## Requirements

- Windows 10 or later
- A C compiler, such as GCC from MSYS2/MinGW, or Dev-C++
- A terminal or Dev-C++ IDE

## Project Files

The project is divided into several C source files:

- `main.c`: application entry point and main menu
- `penjualantiket.c` and `penjualantiket.h`: menu and concert ticket functionality
- `bioskop.c`: cinema ticket functionality
- `hotel.c`: hotel booking functionality
- `history.c`: purchase history functionality
- `paymentbioskop.c` and `paymentkonser.c`: project files reserved for payment modules
- `TugasBesarDDP.dev`: Dev-C++ project file
- `Dt_Konser.txt`, `Dt_Bioskop.txt`, and `Dt_Hotel.txt`: purchase history files

## Installation

### Option 1: Dev-C++

1. Install Dev-C++ with a GCC compiler.
2. Open `TugasBesarDDP.dev` in Dev-C++.
3. Make sure all source files listed in the project are present in the same folder.
4. Select **Execute > Compile & Run**, or press `F11`.

### Option 2: GCC in the Terminal

Install GCC through MSYS2/MinGW and make sure the GCC `bin` directory is included in the Windows `PATH`. Then open PowerShell in the project directory:

```powershell
cd "D:\Eksplorasi\Tugas-Besar"
```

Compile all source files:

```powershell
gcc -std=c11 -Wall -Wextra -o TugasBesarDDP.exe main.c penjualantiket.c bioskop.c paymentkonser.c paymentbioskop.c hotel.c history.c
```

## Running the Application

After compilation, run the program with:

```powershell
.\TugasBesarDDP.exe
```

The project folder already contains a compiled executable, so it can also be started directly from PowerShell:

```powershell
cd "D:\Eksplorasi\Tugas-Besar"
.\TugasBesarDDP.exe
```

When the opening screen appears, press a key. Then choose one of the main menu options:

1. Concert ticket booking
2. Cinema ticket booking
3. Hotel booking
4. Purchase history
5. Exit

Follow the prompts shown in the console to enter ticket, customer, room, and payment information.

## Data Files

Confirmed purchases are appended to these files in the project directory:

- `Dt_Konser.txt`
- `Dt_Bioskop.txt`
- `Dt_Hotel.txt`

Do not move the executable away from the project directory if you want the history files to remain there. The application uses relative file paths when reading and writing purchase history.

## Notes

- This is a Windows console application because it uses `system("cls")` to clear the screen.
- Run the application from the project directory so that the history files can be found correctly.
- The payment screens display transfer instructions; they do not process real payments.
