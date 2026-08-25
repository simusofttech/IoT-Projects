<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">

    <meta
        name="viewport"
        content="width=device-width, initial-scale=1.0"
    >

    <title>Smart Door Viewer and Visitor Alert System</title>

    <style>
        * {
            box-sizing: border-box;
        }

        html {
            scroll-behavior: smooth;
        }

        body {
            margin: 0;
            font-family: Arial, sans-serif;
            color: #1e293b;
            background: #f1f5f9;
            line-height: 1.6;
        }

        header {
            padding: 55px 20px;
            text-align: center;
            color: white;
            background: linear-gradient(
                135deg,
                #0284c7,
                #075985
            );
        }

        header h1 {
            margin: 0 0 12px;
            font-size: 40px;
        }

        header p {
            max-width: 760px;
            margin: auto;
            color: #e0f2fe;
            font-size: 17px;
        }

        .logo {
            display: flex;
            justify-content: center;
            align-items: center;
            margin-bottom: 20px;
        }

        .logo img {
            width: 160px;
            height: auto;
            display: block;
            padding: 8px;
            object-fit: contain;
            background: white;
            border-radius: 12px;
            box-shadow: 0 4px 12px rgba(0, 0, 0, 0.2);
        }

        nav {
            position: sticky;
            top: 0;
            z-index: 100;

            display: flex;
            justify-content: center;
            gap: 22px;
            flex-wrap: wrap;

            padding: 15px;
            background: white;
            box-shadow: 0 3px 12px rgba(0, 0, 0, 0.1);
        }

        nav a {
            color: #075985;
            text-decoration: none;
            font-weight: bold;
        }

        nav a:hover {
            color: #0284c7;
        }

        .container {
            width: 90%;
            max-width: 1050px;
            margin: auto;
            padding: 40px 0;
        }

        .section {
            margin-bottom: 30px;
            padding: 28px;

            background: white;
            border-radius: 14px;

            box-shadow: 0 5px 18px
                rgba(15, 23, 42, 0.08);

            animation: fadeUp 0.8s ease;
        }

        .section h2 {
            margin-top: 0;
            padding-bottom: 10px;

            color: #075985;
            border-bottom: 2px solid #e0f2fe;
        }

        .section h3 {
            margin-top: 25px;
            color: #0369a1;
        }

        .project-info {
            padding: 18px;

            background: #f0f9ff;
            border-left: 5px solid #0284c7;
            border-radius: 8px;
        }

        .project-info p {
            margin: 7px 0;
        }

        .requirements-grid {
            display: grid;
            grid-template-columns: repeat(3, 1fr);
            gap: 16px;
            margin-top: 20px;
        }

        .requirement-card {
            padding: 16px;
            text-align: center;
            overflow: hidden;

            background: #f8fafc;
            border: 1px solid #cbd5e1;
            border-radius: 12px;

            box-shadow: 0 4px 12px
                rgba(15, 23, 42, 0.08);

            transition:
                transform 0.3s ease,
                box-shadow 0.3s ease;
        }

        .requirement-card:hover {
            transform: translateY(-6px);

            box-shadow: 0 10px 22px
                rgba(2, 132, 199, 0.18);
        }

        .requirement-card span {
            width: 100%;
            height: 170px;

            display: flex;
            justify-content: center;
            align-items: center;

            margin-bottom: 14px;
            padding: 10px;
            overflow: hidden;

            background: white;
            border-radius: 10px;
        }

        .requirement-card span img {
            width: 100%;
            height: 100%;
            display: block;

            object-fit: contain;
            object-position: center;

            transition: transform 0.3s ease;
        }

        .requirement-card:hover span img {
            transform: scale(1.08);
        }

        .requirement-card strong {
            display: block;
            margin-top: 5px;

            color: #075985;
            font-size: 18px;
        }

        .requirement-card p {
            margin: 7px 0 0;
            color: #475569;
            font-size: 14px;
        }

        ul,
        ol {
            padding-left: 24px;
        }

        li {
            margin-bottom: 9px;
        }

        .table-wrapper {
            overflow-x: auto;
        }

        table {
            width: 100%;
            min-width: 620px;
            margin-top: 15px;
            border-collapse: collapse;
        }

        th,
        td {
            padding: 13px;
            text-align: left;
            border: 1px solid #cbd5e1;
        }

        th {
            color: white;
            background: #075985;
        }

        tr:nth-child(even) {
            background: #f0f9ff;
        }

        .circuit-image-card {
            margin-top: 22px;
            padding: 15px;
            text-align: center;

            background: #f8fafc;
            border: 1px solid #cbd5e1;
            border-radius: 12px;
        }

        .circuit-image-card img {
            width: 100%;
            max-height: 650px;
            object-fit: contain;

            background: white;
            border-radius: 8px;
        }

        .circuit-image-card h3 {
            margin-bottom: 5px;
        }

        .working-grid {
            display: grid;
            grid-template-columns: repeat(2, 1fr);
            gap: 18px;
            margin-top: 20px;
        }

        .working-card {
            padding: 18px;

            background: #f8fafc;
            border: 1px solid #cbd5e1;
            border-radius: 10px;
        }

        .working-card strong {
            display: block;
            margin-bottom: 7px;

            color: #075985;
            font-size: 18px;
        }

        .code-header {
            display: flex;
            align-items: center;
            justify-content: space-between;
            gap: 15px;

            padding: 12px 16px;

            color: white;
            background: #1e293b;

            border-radius: 10px 10px 0 0;
        }

        .copy-button {
            padding: 8px 14px;

            color: white;
            background: #0284c7;

            border: none;
            border-radius: 6px;

            cursor: pointer;
            font-weight: bold;
        }

        .copy-button:hover {
            background: #0369a1;
        }

        pre {
            margin: 0 0 15px;
            padding: 22px;
            overflow-x: auto;

            color: #e2e8f0;
            background: #0f172a;

            border-radius: 0 0 10px 10px;

            font-family: Consolas, monospace;
            font-size: 14px;
            line-height: 1.6;
        }

        .note {
            margin-top: 20px;
            padding: 15px;

            color: #854d0e;
            background: #fef9c3;

            border: 1px solid #fde047;
            border-radius: 8px;
        }

        .warning {
            margin-top: 20px;
            padding: 15px;

            color: #991b1b;
            background: #fee2e2;

            border: 1px solid #fca5a5;
            border-radius: 8px;
        }

        .success-note {
            margin-top: 20px;
            padding: 15px;

            color: #166534;
            background: #dcfce7;

            border: 1px solid #86efac;
            border-radius: 8px;
        }

        .info-note {
            margin-top: 20px;
            padding: 15px;

            color: #0c4a6e;
            background: #e0f2fe;

            border: 1px solid #7dd3fc;
            border-radius: 8px;
        }

        .back-button,
        .download-button {
            display: inline-block;
            margin: 5px 5px 5px 0;
            padding: 11px 20px;

            color: white;
            background: #0284c7;

            text-decoration: none;
            border-radius: 7px;
            font-weight: bold;

            transition:
                background 0.3s ease,
                transform 0.3s ease;
        }

        .back-button:hover,
        .download-button:hover {
            background: #075985;
            transform: translateY(-2px);
        }

        footer {
            padding: 22px;
            text-align: center;

            color: #cbd5e1;
            background: #0f172a;
        }

        @keyframes fadeUp {
            from {
                opacity: 0;
                transform: translateY(25px);
            }

            to {
                opacity: 1;
                transform: translateY(0);
            }
        }

        @media (max-width: 800px) {
            .requirements-grid {
                grid-template-columns: repeat(2, 1fr);
            }

            .working-grid {
                grid-template-columns: 1fr;
            }

            header h1 {
                font-size: 32px;
            }
        }

        @media (max-width: 520px) {
            .requirements-grid {
                grid-template-columns: 1fr;
            }

            .requirement-card span {
                height: 190px;
            }

            .section {
                padding: 20px;
            }

            header h1 {
                font-size: 27px;
            }

            nav {
                gap: 13px;
                font-size: 14px;
            }

            .copy-button {
                padding: 7px 10px;
            }
        }
    </style>
</head>

<body>

    <header>

        <div class="logo">

            <img
                src="Simusoft logo.jpeg"
                alt="Simusoft Technology Logo"
            >

        </div>

        <h1>Smart Door Viewer & Visitor Alert System</h1>

        <p>
            ESP32-CAM based smart door security system that captures
            a visitor's photo and sends a real-time Telegram alert
            when the doorbell button is pressed.
        </p>

    </header>

    <nav>
        <a href="#details">Project Details</a>
        <a href="#requirements">Components</a>
        <a href="#software">Software</a>
        <a href="#connections">Connections</a>
        <a href="#circuit">Circuit</a>
        <a href="#telegram">Telegram Setup</a>
        <a href="#configuration">Configuration</a>
        <a href="#code">Arduino Code</a>
        <a href="#steps">Operating Steps</a>
    </nav>

    <main class="container">

        <!-- Project Details -->

        <section class="section" id="details">

            <h2>Project Details</h2>

            <div class="project-info">

                <p>
                    <strong>Project Name:</strong>
                    Smart Door Viewer & Visitor Alert System
                </p>

                <p>
                    <strong>Controller:</strong>
                    ESP32-CAM AI Thinker
                </p>

                <p>
                    <strong>Camera:</strong>
                    OV2640 Camera Module
                </p>

                <p>
                    <strong>Input Device:</strong>
                    Push Button
                </p>

                <p>
                    <strong>Output Device:</strong>
                    Active Buzzer
                </p>

                <p>
                    <strong>Communication:</strong>
                    Wi-Fi and Telegram Bot
                </p>

                <p>
                    <strong>Programming Software:</strong>
                    Arduino IDE 2.x
                </p>

                <p>
                    <strong>Purpose:</strong>
                    To detect a visitor at the door, sound a buzzer,
                    capture the visitor's photograph and send the
                    photograph to the owner's Telegram account.
                </p>

            </div>

        </section>

        <!-- Hardware Requirements -->

        <section class="section" id="requirements">

            <h2>Required Components</h2>

            <div class="requirements-grid">

                <div class="requirement-card">

                    <span>
                        <img
                            src="ESP32 CAM.png"
                            alt="ESP32-CAM AI Thinker"
                        >
                    </span>

                    <strong>ESP32-CAM</strong>

                    <p>
                        Main controller with built-in Wi-Fi and
                        camera support.
                    </p>

                </div>

                <div class="requirement-card">

                    <span>
                        <img
                            src="USB TTL.png"
                            alt="USB to TTL programmer"
                        >
                    </span>

                    <strong>USB-to-TTL Programmer</strong>

                    <p>
                        Uploads the Arduino program to ESP32-CAM.
                    </p>

                </div>

                <div class="requirement-card">

                    <span>
                        <img
                            src="Push Button.png"
                            alt="Push Button"
                        >
                    </span>

                    <strong>Push Button</strong>

                    <p>
                        Works as the visitor doorbell button.
                    </p>

                </div>

                <div class="requirement-card">

                    <span>
                        <img
                            src="Buzzer.png"
                            alt="Active buzzer"
                        >
                    </span>

                    <strong>Active Buzzer</strong>

                    <p>
                        Produces a sound when the visitor presses
                        the button.
                    </p>

                </div>

                <div class="requirement-card">

                    <span>
                        <img
                            src="Jumper Wires.png"
                            alt="Jumper Wires"
                        >
                    </span>

                    <strong>Jumper Wires</strong>

                    <p>
                        Used to make the circuit connections.
                    </p>

                </div>

                <div class="requirement-card">

                    <span>
                        <img
                            src="Breadboard.png"
                            alt="Breadboard"
                        >
                    </span>

                    <strong>Breadboard</strong>

                    <p>
                        Optional board for temporary circuit assembly.
                    </p>

                </div>

                <div class="requirement-card">

                    <span>
                        <img
                            src="5V Power Supply.png"
                            alt="5 volt power supply"
                        >
                    </span>

                    <strong>5V Power Supply</strong>

                    <p>
                        Provides a stable power supply to ESP32-CAM.
                    </p>

                </div>

        </section>

        <!-- Software Requirements -->

        <section class="section" id="software">

            <h2>Software Requirements</h2>

            <div class="table-wrapper">

                <table>

                    <thead>
                        <tr>
                            <th>Software or Library</th>
                            <th>Version</th>
                            <th>Purpose</th>
                        </tr>
                    </thead>

                    <tbody>

                        <tr>
                            <td>Arduino IDE</td>
                            <td>2.x</td>
                            <td>
                                Used to write and upload the ESP32-CAM code.
                            </td>
                        </tr>

                        <tr>
                            <td>
                                ESP32 by Espressif Systems
                            </td>
                            <td>3.3.8</td>
                            <td>
                                Adds ESP32-CAM board support to Arduino IDE.
                            </td>
                        </tr>

                        <tr>
                            <td>UniversalTelegramBot</td>
                            <td>Latest compatible version</td>
                            <td>
                                Sends Telegram messages and visitor photos.
                            </td>
                        </tr>

                        <tr>
                            <td>ArduinoJson</td>
                            <td>7.4.3</td>
                            <td>
                                Handles Telegram API data.
                            </td>
                        </tr>

                        <tr>
                            <td>Telegram Application</td>
                            <td>Current version</td>
                            <td>
                                Receives visitor alerts and photos.
                            </td>
                        </tr>

                    </tbody>

                </table>

            </div>

            <div class="note">
                <strong>Important:</strong>
                Install the ESP32 board package and both Arduino
                libraries before compiling the program.
            </div>

        </section>

        <!-- Installation -->

        <section class="section" id="installation">

            <h2>Arduino IDE Installation</h2>

            <h3>Step 1: Install ESP32 Board Package</h3>

            <p>
                Open Arduino IDE and go to:
            </p>

            <div class="project-info">
                <strong>
                    File → Preferences → Additional Boards Manager URLs
                </strong>
            </div>

            <p>
                Paste the following URL:
            </p>

            <div class="code-header">

                <span>ESP32 Board Manager URL</span>

                <button
                    type="button"
                    class="copy-button"
                    onclick="copyCode('boardURL', this)"
                >
                    Copy
                </button>

            </div>

            <pre><code id="boardURL">https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json</code></pre>

            <p>
                Open Boards Manager, search for
                <strong>ESP32 by Espressif Systems</strong>
                and install version <strong>3.3.8</strong>.
            </p>

            <h3>Step 2: Install Required Libraries</h3>

            <p>
                Open:
            </p>

            <div class="project-info">
                <strong>
                    Sketch → Include Library → Manage Libraries
                </strong>
            </div>

            <ol>
                <li>
                    Install
                    <strong>UniversalTelegramBot</strong>
                    by Brian Lough.
                </li>

                <li>
                    Install
                    <strong>ArduinoJson</strong>
                    by Benoit Blanchon, version 7.4.3.
                </li>
            </ol>

        </section>

        <!-- Connections -->

        <section class="section" id="connections">

            <h2>Circuit Connections</h2>

            <h3>USB-to-TTL Programmer Connections</h3>

            <div class="table-wrapper">

                <table>

                    <thead>
                        <tr>
                            <th>USB-to-TTL Pin</th>
                            <th>ESP32-CAM Pin</th>
                            <th>Purpose</th>
                        </tr>
                    </thead>

                    <tbody>

                        <tr>
                            <td>TX</td>
                            <td>U0R / GPIO3</td>
                            <td>Serial data to ESP32-CAM</td>
                        </tr>

                        <tr>
                            <td>RX</td>
                            <td>U0T / GPIO1</td>
                            <td>Serial data from ESP32-CAM</td>
                        </tr>

                        <tr>
                            <td>5V</td>
                            <td>5V</td>
                            <td>Power supply</td>
                        </tr>

                        <tr>
                            <td>GND</td>
                            <td>GND</td>
                            <td>Common ground</td>
                        </tr>

                        <tr>
                            <td>GPIO0</td>
                            <td>GND</td>
                            <td>
                                Connect only while uploading the program
                            </td>
                        </tr>

                    </tbody>

                </table>

            </div>

            <h3>Doorbell Button and Buzzer Connections</h3>

            <div class="table-wrapper">

                <table>

                    <thead>
                        <tr>
                            <th>Component</th>
                            <th>Component Pin</th>
                            <th>ESP32-CAM Connection</th>
                            <th>Purpose</th>
                        </tr>
                    </thead>

                    <tbody>

                        <tr>
                            <td>Push Button</td>
                            <td>Terminal 1</td>
                            <td>GPIO13</td>
                            <td>Doorbell input</td>
                        </tr>

                        <tr>
                            <td>Push Button</td>
                            <td>Terminal 2</td>
                            <td>GND</td>
                            <td>Ground connection</td>
                        </tr>

                        <tr>
                            <td>Active Buzzer</td>
                            <td>Positive</td>
                            <td>GPIO12</td>
                            <td>Buzzer control</td>
                        </tr>

                        <tr>
                            <td>Active Buzzer</td>
                            <td>Negative</td>
                            <td>GND</td>
                            <td>Ground connection</td>
                        </tr>

                    </tbody>

                </table>

            </div>

            <div class="warning">
                <strong>Important:</strong>
                ESP32-CAM requires a stable 5V supply. Weak power may
                cause camera initialization errors or repeated restarts.
            </div>

        </section>

        <!-- Circuit Diagram -->

        <section class="section" id="circuit">

            <h2>Circuit Diagram</h2>

            <p>
                Connect the USB-to-TTL programmer, push button and active
                buzzer according to the connection tables.
            </p>

            <div class="circuit-image-card">

                <img
                    src="ESP32 CAM Circuit Diagram 1.png"
                    alt="ESP32-CAM smart door viewer circuit diagram"
                >

                <h3>Smart Door Viewer Circuit</h3>

                <p>
                    ESP32-CAM connected to a USB-to-TTL programmer,
                    push button and active buzzer.
                </p>

            </div>

        </section>

        <!-- Telegram Setup -->

        <section class="section" id="telegram">

            <h2>Telegram Bot Setup</h2>

            <h3>Step 1: Create a Telegram Bot</h3>

            <ol>
                <li>Open the Telegram application.</li>

                <li>
                    Search for
                    <strong>@BotFather</strong>.
                </li>

                <li>
                    Send the command
                    <strong>/newbot</strong>.
                </li>

                <li>
                    Enter a name for your bot.
                </li>

                <li>
                    Enter a unique username ending with
                    <strong>bot</strong>.
                </li>

                <li>
                    Copy the Bot Token provided by BotFather.
                </li>
            </ol>

            <div class="warning">
                Keep your Telegram Bot Token private. Anyone with the
                token may be able to control your bot.
            </div>

            <h3>Step 2: Obtain Telegram Chat ID</h3>

            <ol>
                <li>Open your newly created bot.</li>

                <li>Press the START button.</li>

                <li>
                    Send a message such as
                    <strong>Hello</strong>.
                </li>

                <li>
                    Open the following address in a browser after
                    replacing YOUR_TOKEN with your Bot Token.
                </li>
            </ol>

            <div class="code-header">

                <span>Telegram Get Updates URL</span>

                <button
                    type="button"
                    class="copy-button"
                    onclick="copyCode('telegramURL', this)"
                >
                    Copy
                </button>

            </div>

            <pre><code id="telegramURL">https://api.telegram.org/botYOUR_TOKEN/getUpdates</code></pre>

            <p>
                Find the <strong>chat</strong> object and copy the
                numeric <strong>id</strong>. This number is your
                Telegram Chat ID.
            </p>

        </section>

        <!-- Board Configuration -->

        <section class="section" id="configuration">

            <h2>Arduino IDE Board Configuration</h2>

            <div class="table-wrapper">

                <table>

                    <thead>
                        <tr>
                            <th>Setting</th>
                            <th>Required Selection</th>
                        </tr>
                    </thead>

                    <tbody>

                        <tr>
                            <td>Board</td>
                            <td>AI Thinker ESP32-CAM</td>
                        </tr>

                        <tr>
                            <td>PSRAM</td>
                            <td>Enabled</td>
                        </tr>

                        <tr>
                            <td>Partition Scheme</td>
                            <td>Huge APP</td>
                        </tr>

                        <tr>
                            <td>Upload Speed</td>
                            <td>115200</td>
                        </tr>

                        <tr>
                            <td>Port</td>
                            <td>USB-to-TTL COM Port</td>
                        </tr>

                    </tbody>

                </table>

            </div>

            <div class="note">
                Connect GPIO0 to GND before uploading. After uploading,
                disconnect GPIO0 from GND and press the RESET button.
            </div>

        </section>

        <!-- Working Principle -->

        <section class="section" id="working">

            <h2>Working Principle</h2>

            <div class="working-grid">

                <div class="working-card">

                    <strong>1. Wi-Fi Connection</strong>

                    ESP32-CAM connects to the configured 2.4 GHz Wi-Fi
                    network.

                </div>

                <div class="working-card">

                    <strong>2. Camera Initialization</strong>

                    The OV2640 camera is initialized and the system
                    enters standby mode.

                </div>

                <div class="working-card">

                    <strong>3. Button Monitoring</strong>

                    ESP32-CAM continuously monitors the push button
                    connected to GPIO13.

                </div>

                <div class="working-card">

                    <strong>4. Visitor Detection</strong>

                    When the visitor presses the button, the buzzer
                    connected to GPIO12 is activated.

                </div>

                <div class="working-card">

                    <strong>5. Telegram Notification</strong>

                    The system sends the message
                    “Someone is at the door!” to Telegram.

                </div>

                <div class="working-card">

                    <strong>6. Visitor Photograph</strong>

                    ESP32-CAM captures the visitor's photograph and
                    uploads it to the Telegram bot.

                </div>

            </div>

        </section>

        <!-- Arduino Code -->

        <section class="section" id="code">

            <h2>ESP32-CAM Code</h2>

            <div class="code-header">

                <span>Smart Door Viewer and Visitor Alert System</span>

                <button
                    type="button"
                    class="copy-button"
                    onclick="copyCode('arduinoCode', this)"
                >
                    Copy Code
                </button>

            </div>

            <pre><code id="arduinoCode">#include "esp_camera.h"
//================ Required Libraries ================
#include "<Arduino.h>" // Core Arduino functions
#include "<WiFi.h>"
#include "<WiFiClientSecure.h>"
#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"
#include "esp_camera.h"
#include "<UniversalTelegramBot.h>"
#include "<ArduinoJson.h>"

//================ Wi-Fi Credentials ================
const char* ssid = "YOUR WIFI SSID";
const char* password = "YOUR WIFI PASSWORD";

// Initialize Telegram BOT
String BOTtoken = "YOUR BOT TOKEN";  // your Bot Token (Get from Botfather)

// Use @myidbot to find out the chat ID of an individual or a group
// Also note that you need to click "start" on a bot before it can
// message you
String CHAT_ID = "1876046271";

bool sendPhoto = false;

WiFiClientSecure clientTCP;
UniversalTelegramBot bot(BOTtoken, clientTCP);

#define FLASH_LED_PIN 4
#define BUTTON_PIN 13
#define BUZZER_PIN 12
bool flashState = LOW;

//Checks for new messages every 1 second.
int botRequestDelay = 1000;
unsigned long lastTimeBotRan;

//CAMERA_MODEL_AI_THINKER
#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27

#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22


void configInitCamera(){
  camera_config_t config;
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = Y2_GPIO_NUM;
  config.pin_d1 = Y3_GPIO_NUM;
  config.pin_d2 = Y4_GPIO_NUM;
  config.pin_d3 = Y5_GPIO_NUM;
  config.pin_d4 = Y6_GPIO_NUM;
  config.pin_d5 = Y7_GPIO_NUM;
  config.pin_d6 = Y8_GPIO_NUM;
  config.pin_d7 = Y9_GPIO_NUM;
  config.pin_xclk = XCLK_GPIO_NUM;
  config.pin_pclk = PCLK_GPIO_NUM;
  config.pin_vsync = VSYNC_GPIO_NUM;
  config.pin_href = HREF_GPIO_NUM;
  config.pin_sccb_sda = SIOD_GPIO_NUM;
  config.pin_sccb_scl = SIOC_GPIO_NUM;
  config.pin_pwdn = PWDN_GPIO_NUM;
  config.pin_reset = RESET_GPIO_NUM;
  config.xclk_freq_hz = 20000000;
  config.pixel_format = PIXFORMAT_JPEG;
  config.grab_mode = CAMERA_GRAB_LATEST;

  //init with high specs to pre-allocate larger buffers
  if(psramFound()){
    config.frame_size = FRAMESIZE_UXGA;
    config.jpeg_quality = 10;  //0-63 lower number means higher quality
    config.fb_count = 2;
  } else {
    config.frame_size = FRAMESIZE_SVGA;
    config.jpeg_quality = 12;  //0-63 lower number means higher quality
    config.fb_count = 1;
  }
  
  // camera init
  esp_err_t err = esp_camera_init(&config);
  if (err != ESP_OK) {
    Serial.printf("Camera init failed. Error code = %d\n", err);
    delay(1000);
    ESP.restart();
  }
  // Camera orientation settings
  sensor_t * s = esp_camera_sensor_get();

  s->set_vflip(s, 1);      // Flip image vertically
  s->set_hmirror(s, 1);    // Mirror image horizontally
}
  

void handleNewMessages(int numNewMessages) {
  Serial.print("Handle New Messages: ");
  Serial.println(numNewMessages);

  for (int i = 0; i < numNewMessages; i++) {
    String chat_id = String(bot.messages[i].chat_id);
    if (chat_id != CHAT_ID){
      bot.sendMessage(chat_id, "Unauthorized user", "");
      continue;
    }
    
    // Print the received message
    String text = bot.messages[i].text;
    Serial.println(text);
    
    String from_name = bot.messages[i].from_name;
    if (text == "/start") {
      String welcome = "Welcome , " + from_name + "\n";
      welcome += "Use the following commands to interact with the ESP32-CAM \n";
      welcome += "/photo : takes a new photo\n";
      welcome += "/flash : toggles flash LED \n";
      bot.sendMessage(CHAT_ID, welcome, "");
    }
    if (text == "/flash") {
      flashState = !flashState;
      digitalWrite(FLASH_LED_PIN, flashState);
      Serial.println("Change flash LED state");
    }
    if (text == "/photo") {
      sendPhoto = true;
      Serial.println("New photo request");
    }
  }
}

String sendPhotoTelegram() {
  const char* myDomain = "api.telegram.org";
  String getAll = "";
  String getBody = "";

  //Dispose first picture because of bad quality
  camera_fb_t * fb = NULL;
  fb = esp_camera_fb_get();
  esp_camera_fb_return(fb); // dispose the buffered image
  
  // Turn ON Flash
  digitalWrite(FLASH_LED_PIN, HIGH);
   delay(300);

  // Take a new photo
  fb = NULL;
  fb = esp_camera_fb_get();

   // Turn OFF Flash
   digitalWrite(FLASH_LED_PIN, LOW); 
  if(!fb) {
    Serial.println("Camera capture failed");
    delay(1000);
    ESP.restart();
    return "Camera capture failed";
  }  
  
  Serial.println("Connect to " + String(myDomain));


  if (clientTCP.connect(myDomain, 443)) {
    Serial.println("Connection successful");
    
    String head = "--RandomNerdTutorials\r\nContent-Disposition: form-data; name=\"chat_id\"; \r\n\r\n" + CHAT_ID + "\r\n--RandomNerdTutorials\r\nContent-Disposition: form-data; name=\"photo\"; filename=\"esp32-cam.jpg\"\r\nContent-Type: image/jpeg\r\n\r\n";
    String tail = "\r\n--RandomNerdTutorials--\r\n";

    size_t imageLen = fb->len;
    size_t extraLen = head.length() + tail.length();
    size_t totalLen = imageLen + extraLen;
  
    clientTCP.println("POST /bot"+BOTtoken+"/sendPhoto HTTP/1.1");
    clientTCP.println("Host: " + String(myDomain));
    clientTCP.println("Content-Length: " + String(totalLen));
    clientTCP.println("Content-Type: multipart/form-data; boundary=RandomNerdTutorials");
    clientTCP.println();
    clientTCP.print(head);
  
    uint8_t *fbBuf = fb->buf;
    size_t fbLen = fb->len;
    for (size_t n=0;n<fbLen;n=n+1024) {
      if (n+1024<fbLen) {
        clientTCP.write(fbBuf, 1024);
        fbBuf += 1024;
      }
      else if (fbLen%1024>0) {
        size_t remainder = fbLen%1024;
        clientTCP.write(fbBuf, remainder);
      }
    }  
    
    clientTCP.print(tail);
    
    esp_camera_fb_return(fb);
    
    int waitTime = 10000;   // timeout 10 seconds
    long startTimer = millis();
    boolean state = false;
    
    while ((startTimer + waitTime) > millis()){
      Serial.print(".");
      delay(100);      
      while (clientTCP.available()) {
        char c = clientTCP.read();
        if (state==true) getBody += String(c);        
        if (c == '\n') {
          if (getAll.length()==0) state=true; 
          getAll = "";
        } 
        else if (c != '\r')
          getAll += String(c);
        startTimer = millis();
      }
      if (getBody.length()>0) break;
    }
    clientTCP.stop();
    Serial.println(getBody);
  }
  else {
    getBody="Connected to api.telegram.org failed.";
    Serial.println("Connected to api.telegram.org failed.");
  }
  return getBody;
}

//================ Setup Function ================
void setup(){
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); 
  // Init Serial Monitor
  Serial.begin(115200);

  // Set LED Flash as output
  pinMode(FLASH_LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(FLASH_LED_PIN, flashState);
  digitalWrite(BUZZER_PIN, LOW);

  delay(2000);

  // Config and init the camera
  configInitCamera();

  // Connect to Wi-Fi
  WiFi.mode(WIFI_STA);
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  clientTCP.setCACert(TELEGRAM_CERTIFICATE_ROOT); // Add root certificate for api.telegram.org
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("ESP32-CAM IP Address: ");
  Serial.println(WiFi.localIP()); 
}

//================ Main Loop ================
void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {

  Serial.println("Doorbell Pressed!");

  // Doorbell Sound
  digitalWrite(BUZZER_PIN, HIGH);
  delay(200);
  digitalWrite(BUZZER_PIN, LOW);
  delay(100);

  digitalWrite(BUZZER_PIN, HIGH);
  delay(200);
  digitalWrite(BUZZER_PIN, LOW);

  bot.sendMessage(CHAT_ID,
                  "🚪 Someone is at the door!",
                  "");

  sendPhoto = true;

  while(digitalRead(BUTTON_PIN) == LOW) {
    delay(10);
  }

  delay(500);
}
  if (sendPhoto) {
    Serial.println("Preparing photo");
    sendPhotoTelegram(); 
    sendPhoto = false; 
  }
  if (millis() > lastTimeBotRan + botRequestDelay)  {
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    while (numNewMessages) {
      Serial.println("got response");
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    }
    lastTimeBotRan = millis();
  }
}
}</code></pre>

            <a
                href="sketch_ESP_SDS_Commented.ino"
                class="download-button"
                download
            >
                Download ESP32 CAM Code
            </a>

            <div class="warning">
                Replace
                <strong>YOUR_WIFI_NAME</strong>,
                <strong>YOUR_WIFI_PASSWORD</strong>,
                <strong>YOUR_TELEGRAM_BOT_TOKEN</strong>
                and
                <strong>YOUR_TELEGRAM_CHAT_ID</strong>
                before uploading the code.
            </div>

        </section>

        <!-- Uploading Steps -->

        <section class="section" id="upload">

            <h2>Steps to Upload the Program</h2>

            <ol>

                <li>
                    Connect the ESP32-CAM to the USB-to-TTL programmer.
                </li>

                <li>
                    Connect GPIO0 to GND.
                </li>

                <li>
                    Connect the USB-to-TTL programmer to the computer.
                </li>

                <li>
                    Select
                    <strong>AI Thinker ESP32-CAM</strong>
                    from the Arduino IDE board menu.
                </li>

                <li>
                    Select the correct COM port.
                </li>

                <li>
                    Set the upload speed to
                    <strong>115200</strong>.
                </li>

                <li>
                    Press the ESP32-CAM RESET button.
                </li>

                <li>
                    Click the Upload button in Arduino IDE.
                </li>

                <li>
                    Wait until the upload is complete.
                </li>

                <li>
                    Disconnect GPIO0 from GND.
                </li>

                <li>
                    Press the RESET button again.
                </li>

            </ol>

            <div class="success-note">
                Open the Serial Monitor at 115200 baud. The ESP32-CAM
                should connect to Wi-Fi and display its IP address.
            </div>

        </section>

        <!-- Operating Steps -->

        <section class="section" id="steps">

            <h2>Steps to Operate the Project</h2>

            <ol>

                <li>
                    Power the ESP32-CAM using a stable 5V supply.
                </li>

                <li>
                    Wait for the ESP32-CAM to connect to Wi-Fi.
                </li>

                <li>
                    Open the Telegram bot on your smartphone.
                </li>

                <li>
                    Confirm that the message
                    <strong>Smart Door Viewer is online</strong>
                    is received.
                </li>

                <li>
                    Press the doorbell push button.
                </li>

                <li>
                    The active buzzer will produce a sound.
                </li>

                <li>
                    Telegram will receive the message
                    <strong>Someone is at the door!</strong>
                </li>

                <li>
                    ESP32-CAM will capture the visitor's photograph.
                </li>

                <li>
                    The photograph will be sent to Telegram.
                </li>

                <li>
                    The system will return to standby mode.
                </li>

            </ol>

            <div class="info-note">
                The ESP32-CAM supports only 2.4 GHz Wi-Fi. It will not
                connect to a 5 GHz-only Wi-Fi network.
            </div>

        </section>

        <!-- Applications -->

        <section class="section" id="applications">

            <h2>Applications</h2>

            <ul>
                <li>Smart doorbell system</li>
                <li>Home security monitoring</li>
                <li>Office entrance monitoring</li>
                <li>Hostel and apartment visitor monitoring</li>
                <li>School laboratory demonstration</li>
            </ul>

        </section>

        <!-- Advantages and Limitations -->

        <section class="section" id="advantages">

            <h2>Advantages and Limitations</h2>

            <h3>Advantages</h3>

            <ul>
                <li>Low-cost security system</li>
                <li>Wireless visitor monitoring</li>
                <li>Real-time photo notification</li>
                <li>Easy to build and operate</li>
                <li>Uses the free Telegram platform</li>
            </ul>

            <h3>Limitations</h3>

            <ul>
                <li>Requires a 2.4 GHz Wi-Fi network</li>
                <li>Requires an active internet connection</li>
                <li>Requires a Telegram account</li>
                <li>Photo delivery depends on network speed</li>
            </ul>

        </section>

        <!-- Troubleshooting -->

        <section class="section" id="troubleshooting">

            <h2>Common Problems and Solutions</h2>

            <div class="table-wrapper">

                <table>

                    <thead>
                        <tr>
                            <th>Problem</th>
                            <th>Possible Cause</th>
                            <th>Solution</th>
                        </tr>
                    </thead>

                    <tbody>

                        <tr>
                            <td>Camera initialization failed</td>
                            <td>
                                Camera ribbon is loose or incorrect
                                board is selected
                            </td>
                            <td>
                                Reconnect the camera and select
                                AI Thinker ESP32-CAM.
                            </td>
                        </tr>

                        <tr>
                            <td>Program upload failed</td>
                            <td>GPIO0 is not connected to GND</td>
                            <td>
                                Connect GPIO0 to GND and press RESET
                                before uploading.
                            </td>
                        </tr>

                        <tr>
                            <td>Wi-Fi is not connecting</td>
                            <td>
                                Incorrect SSID, password or 5 GHz network
                            </td>
                            <td>
                                Check the credentials and use a 2.4 GHz
                                Wi-Fi network.
                            </td>
                        </tr>

                        <tr>
                            <td>Telegram message is not received</td>
                            <td>Incorrect Bot Token or Chat ID</td>
                            <td>
                                Verify the Bot Token and numeric Chat ID.
                            </td>
                        </tr>

                        <tr>
                            <td>Telegram photo is not received</td>
                            <td>
                                Weak internet or camera capture failure
                            </td>
                            <td>
                                Check the internet connection and camera
                                initialization.
                            </td>
                        </tr>

                        <tr>
                            <td>Button is not working</td>
                            <td>Incorrect GPIO13 connection</td>
                            <td>
                                Connect the button between GPIO13 and GND.
                            </td>
                        </tr>

                        <tr>
                            <td>Buzzer is not working</td>
                            <td>
                                Incorrect wiring or passive buzzer used
                            </td>
                            <td>
                                Check GPIO12 wiring and use an active buzzer.
                            </td>
                        </tr>

                        <tr>
                            <td>ESP32-CAM keeps restarting</td>
                            <td>Insufficient power supply</td>
                            <td>
                                Use a stable regulated 5V power supply.
                            </td>
                        </tr>

                    </tbody>

                </table>

            </div>

        </section>

        <a
            href="../index.html"
            class="back-button"
        >
            ← Back to Home
        </a>

    </main>

    <footer>
        Smart Door Viewer & Visitor Alert System Project
    </footer>

    <script>
        function copyCode(codeId, button) {
            const code =
                document.getElementById(codeId).innerText;

            navigator.clipboard
                .writeText(code)
                .then(function () {
                    const originalText =
                        button.textContent;

                    button.textContent = "Copied!";

                    setTimeout(function () {
                        button.textContent =
                            originalText;
                    }, 2000);
                })
                .catch(function () {
                    alert(
                        "Code could not be copied."
                    );
                });
        }
    </script>

</body>

</html>
