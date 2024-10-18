![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a5/Flag_of_the_United_Kingdom_%281-2%29.svg/255px-Flag_of_the_United_Kingdom_%281-2%29.svg.png)

# Media Player App in C++

For the requested assignment, click the link:  
[Assignment](Assignment/)

For the source code, click the link:  
[Code](Code/)

For the Relationship between the Classes, click the link:
[UML-Class-Diagram](UML-Class-Diagram/)

---

## Project Overview

This project involves the development of a **Application Management System** that manages the following entities:

- **Game**: Includes details such as Code, Title, Game Category, whether it is Online, and Manufacturer.  
- **Media Player Application**: Contains Code, Title, List of Supported Formats, and Manufacturer.  
- **App Manufacturer**: Stores Code, Title, and Email information.

---

## Course Information
- **Course**: [Objected Oriented Programming](https://ice.uniwa.gr/education/undergraduate/courses/object-oriented-programming/)
- **Semester**: 2
- **Program**: [UNIWA](https://www.uniwa.gr/)
- **Department**: [Informatics and Computer Engineering](https://ice.uniwa.gr/)
- **Instructor**: [Georgios Meletiou](https://ice.uniwa.gr/emd_person/17562/)

## Student Information
- **Name**: Athanasiou Vasileios Evangelos
- **Student ID**: ice19390005
- **Status**: Undergraduate

---

## Functionality

The system performs the following actions through an instance of the `AppData` class:

- Maintains a single list of all system applications.
- Maintains a list of app manufacturers.
- Inserts or deletes applications in the application list.
- Inserts a manufacturer into the list of manufacturers.
- Outputs all application attributes to a human-readable format using the `<<` operator.
- Writes the details of all app manufacturers to a file.
- Returns a list of Media Player applications that support a specific format.

---

## Specifications

### Class Design:
- Each class includes a `Code` field (as a string) and avoids using the `std::string` class for the Code field.
- A constructor will be implemented for the `Media Player Application` class.
- Only essential methods for system functionality will be implemented (setters/getters are omitted unless necessary).
- **No public attributes** are used.
- **Error handling** is managed through exceptions.

### Expected Output:
The program is designed to demonstrate the above functionality. It will interact with the user through keyboard inputs, but file reading from the keyboard is not necessary.

---

## Requirements

- **C++ Compiler**: G++ or any standard C++ compiler.
- **Operating System**: Linux/Windows/MacOS.
- **Development Environment**: Command Line or IDE.

---

## Installation and Usage

### 1. Clone the Repository
```bash
git clone https://github.com/Object-Oriented-Programming-aka-Uniwa/Media-Player.git
cd Media-Player
```

### 2. Compile
```bash
g++ -o Media-Player App.cpp AppConst.cpp AppData.cpp Game.cpp MediaPlayer.cpp main.cpp
```

### 3. Run
```bash
./Media-Player
```


![Flag](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Flag_of_Greece.svg/255px-Flag_of_Greece.svg.png)

# Εφαρμογή Media Player σε C++

Για την εκφώνηση της εργασίας, κάντε κλικ στον σύνδεσμο:  
[Εργασία](Assignment/)

Για τον πηγαίο κώδικα, κάντε κλικ στον σύνδεσμο:  
[Κώδικας](Code/)

Για την Σχέση μεταξύ των Κλάσεων, κάντε κλικ στον σύνδεσμο:  
[Διάγραμμα Κλάσεων UML](UML-Class-Diagram/)

---

## Επισκόπηση Έργου

Αυτό το έργο αφορά την ανάπτυξη ενός **Συστήματος Διαχείρισης Εφαρμογών**, το οποίο διαχειρίζεται τις παρακάτω οντότητες:

- **Παιχνίδι**: Περιλαμβάνει λεπτομέρειες όπως Κωδικός, Τίτλος, Κατηγορία Παιχνιδιού, αν είναι Online, και Κατασκευαστής.  
- **Εφαρμογή Media Player**: Περιέχει Κωδικό, Τίτλο, Λίστα Υποστηριζόμενων Μορφότυπων και Κατασκευαστή.  
- **Κατασκευαστής Εφαρμογών**: Αποθηκεύει τον Κωδικό, τον Τίτλο και το Email του κατασκευαστή.

---

## Πληροφορίες Μαθήματος
- **Μάθημα**: Αντικειμενοστραφής Προγραμματισμός
- **Εξάμηνο**: 2
- **Πρόγραμμα**: [ΠΑΔΑ](https://www.uniwa.gr/)
- **Τμήμα**: [Μηχανικών Πληροφορικής και Υπολογιστών Υπολογιστών](https://ice.uniwa.gr/)
- **Καθηγητής**: [Γεώργιος Μελετίου](https://ice.uniwa.gr/emd_person/17562/)

## Πληροφορίες Φοιτητή
- **Όνομα**: Αθανάσιου Βασίλειος Ευάγγελος
- **Αριθμός Φοιτητή**: ice19390005
- **Κατάσταση**: Προπτυχιακός

---

## Λειτουργικότητα

Το σύστημα εκτελεί τις ακόλουθες ενέργειες μέσω μιας παρουσίας της κλάσης `AppData`:

- Διατηρεί μια μοναδική λίστα με όλες τις εφαρμογές του συστήματος.
- Διατηρεί μια λίστα κατασκευαστών εφαρμογών.
- Εισάγει ή διαγράφει εφαρμογές από τη λίστα εφαρμογών.
- Εισάγει έναν κατασκευαστή στη λίστα των κατασκευαστών.
- Εκτυπώνει όλα τα χαρακτηριστικά των εφαρμογών σε ανθρώπινα αναγνώσιμη μορφή χρησιμοποιώντας τον τελεστή `<<`.
- Γράφει τις λεπτομέρειες όλων των κατασκευαστών εφαρμογών σε ένα αρχείο.
- Επιστρέφει μια λίστα με τις εφαρμογές Media Player που υποστηρίζουν έναν συγκεκριμένο μορφότυπο.

---

## Προδιαγραφές

### Σχεδίαση Κλάσεων:
- Κάθε κλάση περιλαμβάνει ένα πεδίο `Κωδικός` (ως συμβολοσειρά) και αποφεύγεται η χρήση της κλάσης `std::string` για το πεδίο Κωδικός.
- Ένας constructor θα υλοποιηθεί για την κλάση `Media Player Application`.
- Μόνο οι απαραίτητες μέθοδοι για τη λειτουργικότητα του συστήματος θα υλοποιηθούν (τα setters/getters θα παραλειφθούν, εκτός αν είναι απαραίτητα).
- **Δεν χρησιμοποιούνται δημόσια πεδία.**
- **Η διαχείριση λαθών** γίνεται μέσω εξαιρέσεων.

### Αναμενόμενη Έξοδος:
Το πρόγραμμα είναι σχεδιασμένο να επιδεικνύει την παραπάνω λειτουργικότητα. Θα αλληλεπιδρά με τον χρήστη μέσω εισαγωγής από το πληκτρολόγιο, αλλά δεν είναι απαραίτητη η ανάγνωση αρχείων από το πληκτρολόγιο.

---

## Απαιτήσεις

- **Μεταγλωττιστής C++**: G++ ή οποιοσδήποτε άλλος συμβατός μεταγλωττιστής C++.
- **Λειτουργικό Σύστημα**: Linux/Windows/MacOS.
- **Περιβάλλον Ανάπτυξης**: Γραμμή Εντολών ή IDE.

---

## Εγκατάσταση και Χρήση

### 1. Κλωνοποίηση του Αποθετηρίου
```bash
git clone https://github.com/Object-Oriented-Programming-aka-Uniwa/Media-Player.git
cd Media-Player
```

### 2. Μεταγλώττιση
```bash
g++ -o Media-Player App.cpp AppConst.cpp AppData.cpp Game.cpp MediaPlayer.cpp main.cpp
```

### 3. Εκτέλεση
```bash
./Media-Player
```