class Student {
  // private section
  private:
      int studentId;
      char name[20];
  //    name <- 20 charcters
  
  // public section
  public:
  Student();
    void assignDetails(int stdid, char sname[]);// method declaration
    void  display(); //method declaration
};
