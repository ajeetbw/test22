# Task Management System and Data Pipeline
A comprehensive task management system and data pipeline for efficient workflow management and data processing.

## Project Description
This project encompasses two primary components: a task management system and a data pipeline. The task management system is designed to handle tasks with varying priorities and statuses, utilizing object-oriented programming principles and concurrency structures. The data pipeline module simulates a data extraction, transformation, and loading (ETL) pipeline, generating mock sales data, aggregating metrics, and outputting the results. This project aims to demonstrate a complete, self-contained system for managing tasks and processing data, leveraging a range of programming languages and technologies.

## Tech Stack
* **Languages:** Java, C++, Python, C, JavaScript
* **Frameworks/Libraries:** None
* **Databases:** In-memory database (Node.js)

## Directory Structure
```markdown
.
├── TaskManagementSystem.java
├── StringProcessor.cpp
├── data_pipeline.py
├── file_io.c
├── main.c
├── item.h
├── server.js
├── .gitignore
├── inventory.h
├── file_io.h
├── Makefile
├── utils.c
├── utils.h
├── item.c
└── inventory.c
```

## Installation and Startup
1. Clone the repository: `git clone https://github.com/your-repo/task-management-system.git`
2. Navigate to the project directory: `cd task-management-system`
3. Compile the Java task management system: `javac TaskManagementSystem.java`
4. Run the Java task management system: `java TaskManagementSystem`
5. Run the Python data pipeline: `python data_pipeline.py`
6. Start the Node.js server: `node server.js`

## Usage/API Examples
### Task Management System
* Create a new task: `Task task = new Task(1, "Example Task", "This is an example task", TaskPriority.MEDIUM);`
* Update task status: `task.setStatus(TaskStatus.IN_PROGRESS);`
* Print task details: `System.out.println(task.toString());`

### Data Pipeline
* Generate mock sales data: `DataPipeline pipeline = new DataPipeline(); pipeline.generate_data();`
* Process and aggregate sales data: `pipeline.process_data();`

### Server API
* Get all users: `GET /users`
* Get user by ID: `GET /users/:id`
* Create new user: `POST /users` with JSON payload `{"name": "John Doe", "role": "Admin"}`

## Contributing
Contributions are welcome. Please submit a pull request with your changes and a brief description of the modifications.

## License
This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.