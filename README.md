# Clash

A third-person action game built with Unreal Engine 5.0, featuring a character-based gameplay system with health mechanics and standard third-person controls.

## Project Overview

Clash is an Unreal Engine project that extends the standard third-person template with custom gameplay features. The project includes a custom character class with health system and a dedicated game mode for managing game rules and mechanics.

## Technical Details

- **Engine Version**: Unreal Engine 5.0
- **Project Type**: C++ Game Project
- **Target Platform**: Desktop (Windows)
- **Graphics API**: DirectX 12
- **Build System**: Unreal Build Tool

## Project Structure

### Core Modules
- **Clash**: Main game module containing core gameplay classes
- **ClashEditor**: Editor-specific functionality and tools

### Key Classes
- `AClashGameMode`: Custom game mode managing game rules and flow
- `AClashCharacter`: Enhanced third-person character with health system and movement controls
- Standard third-person camera setup with spring arm and follow camera

### Content Organization
- `Content/ThirdPerson/`: Third-person template assets and maps
- `Content/Characters/`: Character models and animations (Mannequin assets)
- `Content/StarterContent/`: Standard Unreal starter content
- `Content/LevelPrototyping/`: Level design prototyping assets

## Features

### Character System
- Third-person character controller with camera boom
- Health system (default: 100 HP)
- Standard movement controls (WASD + mouse)
- Touch input support for mobile platforms
- Gamepad support with configurable turn rates

### Input Controls
- Forward/Backward movement
- Left/Right strafing
- Mouse look and gamepad look controls
- Touch input handling

## Getting Started

### Prerequisites
- Unreal Engine 5.0 or compatible version
- Visual Studio 2019/2022 with C++ development tools
- Windows 10/11 (primary target platform)

### Setup Instructions
1. Clone the repository
2. Right-click on `Clash.uproject` and select "Generate Visual Studio project files"
3. Open `Clash.sln` in Visual Studio
4. Build the solution (Development Editor configuration)
5. Launch the project through Unreal Editor

### Default Map
The project starts with `ThirdPersonMap` located in `/Game/ThirdPerson/Maps/`

## Development

### Building
- Use Visual Studio to compile C++ code
- Hot reload is supported for most code changes
- Full rebuild may be required for structural changes

### Plugins
- **ModelingToolsEditorMode**: Enabled for enhanced level editing capabilities

## Configuration

Key configuration files:
- `Config/DefaultEngine.ini`: Engine and rendering settings
- `Config/DefaultGame.ini`: Game-specific settings
- `Config/DefaultInput.ini`: Input mapping configuration

## Contributing

When contributing to this project:
1. Follow Unreal Engine C++ coding standards
2. Test changes in both editor and packaged builds
3. Update documentation for new features
4. Ensure compatibility with UE 5.0

## License

This project uses Epic Games' standard copyright notice. Please refer to Epic Games' licensing terms for Unreal Engine projects.