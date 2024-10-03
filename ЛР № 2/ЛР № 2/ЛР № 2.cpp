#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
     cout << "Content-type: text/html " <<  endl <<  endl;
     cout << "<!DOCTYPE html>" <<  endl;
     cout << "<html lang=\"ru\">" <<  endl;
     cout << "<head>" <<  endl;
     cout << "<meta charset=\"UTF-8\">" <<  endl;
     cout << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">" <<  endl;
     cout << "<link rel=\"icon\" href=\"./images/game-launcher-svgrepo-com.svg\">" <<  endl;
     cout << "<link rel=\"stylesheet\" href=\"./bootstrap/css/bootstrap.min.css\">" <<  endl;
     cout << "<link rel=\"stylesheet\" href=\"./css/style.css\">" <<  endl;
     cout << "<title>Угадай число</title>" <<  endl;
     cout << "</head>" <<  endl;
     cout << "<body>" <<  endl;
     cout << R"(
   <header class="bg-dark text-center p-4">Guess the Number</header>
   <section id="game" class="container mt-5">
       <div class="g row align-items-center justify-content-center">
           <div class="col-md-10">
               <h2>Игра «Угадай число»</h2>
               <p class="rules" id="rule__one">
                   Компьютер загадывает число в диапазоне [<span id="min"></span>;<span id="max"></span>].
               </p>
               <p class="rules" id="rule__two">
                   У пользователя есть <span id="count"></span> попыток угадать это число.
               </p>
               <form
               id="guessForm"
               class="d-flex justify-content-between align-items-start">
                   <div class="d-flex form-group">
                       <input type="number" class="form-control" id="guess" placeholder="Введите число" required>
                   </div>
                   <div class="form-btn d-flex justify-content-center align-items-center">
                       <button type="submit" id="submit" class="btn btn__ btn-primary px-4">
                           Ввод
                       </button>
                       <button type="reset" id="reset" class="btn btn__ btn-warning px-4">
                           Заново
                       </button>
                   </div>
               </form>
               <div class="container other d-flex flex-column align-items-start mt-2">
                   <p class="answer" id="answer"></p>
                   <p class="prev__numbers" id="prev">Введённые ранее числа:</p>
                   <p class="scale">Шкала оставшихся попыток</p>
                   <div class="progress" style="height: 30px; width: 100%">
                       <div class="progress-bar bg-warning" id="progress" role="progressbar" style="width: 100%" aria-valuenow="100" aria-valuemin="0" aria-valuemax="100">
                           <span id="remaining"></span>
                       </div>
                   </div>
               </div>
           </div>
       </div>
   </section>
   <script src="./bootstrap/js/bootstrap.min.js"></script>
   <script src="./js/script.js"></script>)" << endl;
    cout << "</body>" << endl;
    cout << "</html>" << endl;

    return 0;
}