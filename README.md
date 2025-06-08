# Bank Console Application

A comprehensive C++ console-based banking system implementing Object-Oriented Programming principles, user authentication, permission management, and secure file operations.

## 🎯 Project Overview

This academic project demonstrates advanced C++ programming concepts including OOP design, file I/O operations, encryption, and user access control systems. Built from scratch with custom libraries developed through coursework.

## ✨ Key Features

### 🔐 Authentication & Security
- **Secure Login System** with encrypted password storage
- **User Permission Management** with granular access control
- **Login/Register Logging** with activity tracking
- **Role-based Access Control** preventing unauthorized operations

### 👥 Client Management
- Add new clients with comprehensive data validation
- View complete client listings with formatted display
- Update existing client information
- Delete client records with confirmation prompts
- Search and filter client database

### 🏛️ User Administration
- Multi-level user management system
- Create users with customizable permission sets
- Update user credentials and access rights
- Remove users with audit trail maintenance
- View user lists with permission status

### 💰 Transaction System
- **Deposit Operations** with real-time balance updates
- **Withdrawal Processing** with insufficient funds validation
- **Currency Exchange** with live rate calculations
- **Transfer Operations** between client accounts
- **Transaction Logging** for audit and compliance

### 📊 Data Management
- **File-based Storage System** for all entities:
  - Users database with encrypted credentials
  - Clients information and account details
  - Transaction logs with timestamps
  - Login/Register activity logs
  - Currency exchange rates
- **Centralized Path Configuration** via `GeneralFiles.h`
- **Data Persistence** across application sessions

## 🏗️ Technical Architecture

### Object-Oriented Design
- **Modular class structure** following SOLID principles
- **Encapsulation** of data and business logic
- **Inheritance hierarchies** for user types and permissions
- **Polymorphism** in transaction processing

### Custom Libraries (Built from Previous Courses)
- **util.h** - General utility functions and helper methods
- **string.h** - Custom string manipulation and processing utilities
- **date.h** - Date handling, formatting, and validation operations
- **inputvalidate.h** - User input validation and sanitization functions
- **period.h** - Time period calculations and date range operations

### Project-Specific Components
- File handling utilities for data persistence
- Custom encryption algorithms for password security
- Menu navigation and UI components
- Permission management system

## 🚀 Getting Started

### Prerequisites
- Visual Studio 2019/2022 or compatible C++ compiler
- Windows operating system (for file path compatibility)

### Setup Instructions

1. **Clone/Download** the project to your local machine
2. **Configure File Paths**:
   ```cpp
   // Edit GeneralFiles.h file
   // Update the general path to match your project location
   const std::string GENERAL_PATH = "your/project/path/here/";
   ```
3. **Build the Project**:
   - Open solution in Visual Studio
   - Set to Release mode for optimal performance
   - Build → Build Solution

4. **Run the Application**:
   - Execute the generated `.exe` file
   - Default admin credentials will be provided for initial setup

## 📁 File Structure

```
BankConsoleApp/
├── src/
│   ├── GeneralFiles.h          # Path configuration
│   ├── [Class implementations]
├── data/
│   ├── Users.txt              # Encrypted user data
│   ├── Clients.txt            # Client information
│   ├── Currencies.txt         # Exchange rates
│   ├── TransferLog.txt        # Transaction history
│   └── LoginRegisterLog.txt   # Access logs
└── README.md
```

## 🔧 Configuration

The application uses a centralized configuration approach:

```cpp
// GeneralFiles.h - Single point of configuration
#ifndef GENERAL_FILES_H
#define GENERAL_FILES_H

const std::string BASE_PATH = "C:/your/project/path/BankConsoleApp/";
// All file paths derive from this base path

#endif
```

## 🛡️ Security Features

- **Password Encryption**: All user passwords stored with custom encryption
- **Permission Validation**: Each operation checks user authorization
- **Audit Logging**: Complete transaction and access history
- **Input Validation**: Prevents invalid data entry and SQL-like attacks
- **Session Management**: Secure login/logout procedures

## 🎮 Usage Examples

### Admin Operations
```
1. Login with admin credentials
2. Access User Management
3. Create new users with specific permissions
4. Monitor system logs and activities
```

### Teller Operations
```
1. Login with teller account
2. Add new clients
3. Process deposits/withdrawals
4. Generate transaction reports
```

### Manager Operations
```
1. Full system access
2. Currency rate management
3. User permission modifications
4. Comprehensive reporting
```

## 🔍 Technical Highlights

- **Custom Utility Libraries**: Leveraged self-built libraries from previous coursework (util.h, string.h, date.h, inputvalidate.h, period.h)
- **File I/O Operations**: Efficient data reading/writing with custom file handling
- **Encryption Implementation**: Secure password storage algorithms
- **Permission System**: Bitwise operations for granular access control
- **Date & Time Management**: Comprehensive timestamp and period calculations
- **Input Validation**: Robust user input sanitization and validation
- **Error Handling**: Comprehensive exception management
- **Memory Management**: Proper resource allocation and cleanup

## 📈 Learning Outcomes

This project demonstrates proficiency in:
- Advanced C++ programming concepts and OOP principles
- Integration of custom libraries developed across multiple courses
- File system operations and data persistence
- Security implementation and encryption techniques
- User interface design for console applications
- Software architecture and design patterns
- Date/time processing and validation systems
- String manipulation and utility function development

## 🤝 Academic Context

Developed as a comprehensive coursework project, this application showcases the integration of multiple programming concepts learned throughout the C++ curriculum. The project builds upon custom libraries (util.h, string.h, date.h, inputvalidate.h, period.h) developed in previous courses, demonstrating progressive learning and practical application of accumulated knowledge in a complex banking system scenario.

## 📝 Notes for Developers

- **Path Configuration**: Only modify `GeneralFiles.h` for deployment
- **File Format**: Maintain existing file structures for data integrity
- **Permissions**: Understand the permission system before modifying user access
- **Testing**: Use provided test data for safe development

---

*This project represents academic work completed as part of a structured C++ programming course, emphasizing practical application of theoretical concepts in a real-world banking scenario.*
