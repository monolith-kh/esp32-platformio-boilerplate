## 🚀 ESP32-S3 Demo Firmware
이 프로젝트는 ***ESP32-S3-DevKitC1-N16R8*** 보드를 위한 PlatformIO 기반의 첫 번째 펌웨어 프로젝트입니다.
네이티브 USB CDC 기능을 활성화하여 별도의 USB-to-Serial 칩 없이도 시리얼 통신과 디버깅이 가능하도록 설정되어 있습니다.

## 📋 하드웨어 사양
- ***MCU***: ESP32-S3 (Xtensa® 32-bit LX7 dual-core)
- ***Flash***: 16MB (N16)
- ***PSRAM***: 8MB Quad/Octal (R8)
- ***Board***: ESP32-S3-DevKitC-1

## ⚙️ 주요 설정 설명 (platformio.ini)
이 프로젝트는 다음과 같은 핵심 설정을 포함하고 있습니다:

### 1. 플랫폼 및 프레임워크
- ***Platform***: 최신 ESP32 기능을 지원하기 위해 특정 버전의 pioarduino/platform-espressif32를 사용합니다.
- ***Framework***: 익숙하고 강력한 Arduino Core for ESP32를 기반으로 합니다.

### 2. USB CDC 디버깅 (중요)
일반적인 ESP32와 달리, S3의 내부 USB 기능을 사용하여 시리얼 출력을 제어합니다.
- `ARDUINO_USB_MODE=1`: 하드웨어 CDC/JTAG 컨트롤러를 사용하도록 설정합니다.
- `ARDUINO_USB_CDC_ON_BOOT=1`: 기기가 부팅될 때 즉시 USB 시리얼 포트를 활성화합니다. 이를 통해 `Serial.print()` 출력을 별도의 배선 없이 USB 케이블만으로 확인할 수 있습니다.

### 3. 디버그 및 모니터링
- `CORE_DEBUG_LEVEL=5`: 가장 높은 수준(Verbose)의 디버그 메시지를 출력하여 시스템 내부 동작을 상세히 모니터링합니다.
- `monitor_speed=115200`: 시리얼 모니터의 통신 속도를 115200bps로 표준화합니다.

## 🛠️ 시작하기
1. ***PlatformIO 설치***: VS Code용 PlatformIO IDE 확장이 설치되어 있는지 확인하세요.
2. ***보드 연결***: ESP32-S3 보드의 USB port(UART 포트 아님)를 PC에 연결합니다.
3. ***빌드 및 업로드***:
    1. VS Code 하단 상태 표시줄의 `Check(빌드)` 아이콘을 누릅니다.
    2. `Arrow(업로드)` 아이콘을 눌러 펌웨어를 보드에 기록합니다.
4. ***시리얼 모니터 확인***: 업로드 완료 후 `Plug(모니터)` 아이콘을 실행하여 로그를 확인합니다.

## 🔗 참고 링크
- [What is PlatformIO?](https://docs.platformio.org/en/latest/what-is-platformio.html)
- [Tutorial and Examples](https://docs.platformio.org/en/latest/tutorials/espressif32/arduino_debugging_unit_testing.html)
- [PlatformIO ESP32 플랫폼 문서](https://docs.platformio.org/en/latest/platforms/espressif32.html)
- [Espressif 32: pioarduino 깃허브](https://github.com/pioarduino/platform-espressif32)
- [Project Configuration File on PlatformIO](https://docs.platformio.org/en/latest/projectconf/index.html)
