namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
        public:
    //Task 1
            Alien (int x_new, int y_new){
                x_coordinate=x_new;
                y_coordinate=y_new;
            }
            int get_health(){
                return health;
            }
            int x_coordinate{0};
            int y_coordinate{0};
    //Task 2
            bool hit(){
                if (health>0){
                    health--;
                }
                return true;
            }
    //Task 3
            bool is_alive(){
                return health>0;
            }
    //Task 4
            int teleport(int x_new, int y_new){
                x_coordinate = x_new;
                y_coordinate = y_new;
                return true;
            }
    //Task 5
            bool collision_detection(Alien alien2){
                return(x_coordinate==alien2.x_coordinate&&y_coordinate==alien2.y_coordinate);
            }
        private:
            int health{3};
    };
}  // namespace targets
