all: Stimulate

Stimulate: mainpro.cpp calculator.cpp modified_calculator.cpp bank.cpp library.cpp student.cpp class_monitor.cpp leader.cpp staff.cpp teacher.cpp class_teacher.cpp admin.cpp login_system.cpp 
	g++ -o Stimulate mainpro.cpp calculator.cpp modified_calculator.cpp bank.cpp library.cpp student.cpp class_monitor.cpp leader.cpp staff.cpp teacher.cpp class_teacher.cpp admin.cpp login_system.cpp 