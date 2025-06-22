//Robledo Ana Clara 
//Lapitz Lucas
//Ferrando Pablo
//Rivero Lorena

#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

int main() {
    int planeta;
    char letra;

    while (true) { 
        // Inicio del bucle principal del juego
        system("clear"); //Limpio la consola 

        cout << "\n====== CONSOLA DE NAVEGACIÓN INTERGALÁCTICA ======\n";
        cout << "1. Estación espacial Rocco Molopolk\n";
        cout << "2. Planeta TOXICO\n";
        cout << "3. Planeta Circia\n";
        cout << "4. Planeta Trantor- SPA GALÁCTICO STEAMPUNK\n";
        cout << "5. Salir\n";
        cout << "Selecciona un planeta (1-5): ";
        cin >> planeta;

        // Validación de entrada para el menú principal
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n'); // Aumentado el ignore por si acaso
            cout << "Entrada inválida. Por favor, ingresa un número del 1 al 5.\n";
            continue; // Vuelve al inicio del bucle while
        }

        if (planeta < 1 || planeta > 5) {
            cout << "Planeta inexistente. Intenta con un número del 1 al 5.\n";
            continue; // Vuelve al inicio del bucle while
        }

        // La opción 5 (Salir) es manejada por el return 0; dentro del switch
        // No necesitamos un if separado aquí, ya que el switch lo hará.

        switch (planeta) {
            case 1: { // Inicio del case 1: Estación espacial Rocco Molopolk
                int i;
                cout << "\nBienvenido a la Estación Espacial de Rocco Molopolk!\n";

                  cout << R"PLANETA1( 
                                          
                  
                 .                                                        
                                                                          
                                                                          
                    'c:.                                                  
                  .;lk0x'                                      .,d,       
                  .,;coo:c.                                 ..;kkW.  .    
                    ',ol,0K:           .,,'',..        ,lkOl'l0NWc        
                     ,dkkXWk        .:OWXKNNkdooc.        ',k00k,         
                      .,cO;'l'.';  .lx0kkOKxlclxkOd  .   . :dl,           
                         .:';'... .:lol::loc::dO0oo.....:c'...            
                         .ll:cc',,lc';,'',;:;:dkd,';:.cc:doc'.            
:::::::::::::;;;;;;;,,,''',llc.;kOKO.......''',::'.,cll:coc,  ..          
dddddddddddddddddddddddddddo;ll:loc:.  .......''...clc;loo;    .          
ddoooooddddxxxxxxxxxxxxxxxxo,ool::od0;......'....cll;.;cld:     ...       
xxxdddxxdxxxxxxddxxxxxxkxxx,lO'.'dxxo..';ldol,'..,l:old;':o.     .c::;;,'.
ddxxxxxdddddxxxxxxxxxxxd:'';oxc' ...'.:dxxxxkkx:..''':oo';dx      ;lllllll
doloodooooddddddddddxdl. ..;lxKXk....ldxxxxxxOkxd. ...l,.':okOo.  .ooooooo
llllloollooooooddxxxxx.  ..,cxKXXx. ;ddxxddddododo...   ..,cd0XK'  lddooll
dxkxxxdoodddxddxxxdxxx.  .',cxKNN0..;,,;;;;;;;::cc:.'....',:d0NW0  ;xdddoo
kkkkkxdxxxdolc:c:cllll.  ..,:d00XO .,:,,,,,,,'',,,:...  ..,:oOKNX  ,xxxxdd
kxkddooxkdlc:;:;,::::;.. .';lkXWW0..;;;,,,,,;:,,,',...  ..';lkKNK  'xxxxdd
cllccl:coc;,;;c,,,::;c.  ..;lkKXKd..';;,'::,''',,,,......',:d0NWX  ,oooooo
ddollllc:cc;:cllc:looll. .'cd0XNd....,'''',,,,,',:'.'.  ..,:oOKXo  :lllooo
doocllllllollcoollllcccc:;::d0c. .....,'',;;;,',;'.......':okKKc  .;:::ccc
clolclcc::cllcllllcl::c:cl:,cx: ..;:;...';loooo:'...','. 'ok,.    ',;;;;;;
,,;,,;;;:coollllodxollldxoc:',clc:OKKo....,.:.....c:ol,..:0d     .',;;;;;;
''''',',,;;;;::;;;;;;;,;;,,,'cllclol;  ....... ..'ll:.,:l0O     .',,,;;,,'
;,''''',:,',;;;;;;;;;,,',,,;ll:.;od0:  ..  ....   .co::kxdd    .'''',,;;::
.':cclcccc:c:c:,;c:cc:llolcll::.l;;;.';,.',,,,,clc''lol;codk' .';;;,''''';
..;clllc:;,''',;ll:llcc::ldlcl..'..'lcl;,;::;;ck0:,lKlco::OX:.:;,'''',;,,,
..'coolll:,,,,,;o:;dXc.  cdcc,.'c;..lokoloxo::lkXK0x...'.'c',cc::;,,'''',:
.;oxddo::clc:;:c:;;:d''..    .',,,'.'l0NKKN0ollxOKO.   ..,,,:'.',,cllc:,''
,',c:;;,,,:ll;,,c:,.,dKd.    ...','.'.;dkxO0Ool:;'...';;,'',::,:ooclccclcc
..,;c:;,,',;:'...''cKK0c    ..',;;;'..'.......'','''',',,',,.,',cdkddkxxxx
..'';'......'....,dXW0;  .::;;:::c;.....'.'..'.'',,''',;::'.';,'';'.;ddooo
.......'..,,.....lxd, .',lo:;;;;;;,'''.......'''..;:'',,,,',''';...';;:oxd
......':,.'............,.,;,',,;:,'''''..,;,,..,'..,'.,';,',;c;,;'..'',cod
........;'.....',......'';',,'''..'..'...,::'....'.'..'''';;;;:;;,''''';:c
..........................................................................




)PLANETA1";
                cout << "1. COMPRAR NAVES\n2. Show de Señoritas Espaciales\n3. Tomar Flacknar\n";
                cout << "Elige una opción: "; // Agregado un prompt
                cin >> i;

                // ASCII de la estación (se imprime siempre que se elige la estación)
    

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida para la estación.\n";
                   // break; // Sale del switch (case 1), vuelve al menú principal de planetas
                }

                switch (i) { // Switch anidado para opciones de la estación
                    case 1: { // Inicio del case 1.1: COMPRAR NAVES
                        cout << "\nHas decidido COMPRAR NAVES.\n";
                        int ia;
                        cout << "\nSelecciona tipo de recarga:\n1. Baja\n2. Intermedia\n3. Alta\n";
                        cout << "Elige una opción: "; // Agregado un prompt
                        cin >> ia;

                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Entrada inválida para tipo de recarga.\n";
                           // break; // Sale de COMPRAR NAVES, vuelve a opciones de Estación Espacial
                        }

                        switch (ia) { // Switch anidado para tipos de recarga
                            case 1: { // Inicio del case 1.1.1: Nave TERRASAURUX REX
                                cout << "\nHas elegido la nave TERRASAURUX REX.\n";
                                int y;
                                cout << "\nAhora puedes:\n1. Ver show\n2. Tomar Flacknar\n";
                                cout << "Elige una opción: "; // Agregado un prompt
                                cin >> y;

                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout << "Entrada inválida.\n";
                                   // break; // Sale de opciones de TERRASAURUX REX
                                }

                                switch (y) { // Switch anidado para opciones de la nave
                                    case 1: { // Inicio del case 1.1.1.1: Conocer señorita del show
                                        int b;
                                        cout << "\nConoces a una señorita del show.\n1. Dialogar\n2. Alejarte\n";
                                        cout << "Elige una opción: "; // Agregado un prompt
                                        cin >> b;
                                        if (cin.fail()) {
                                            cin.clear();
                                            cin.ignore(10000, '\n');
                                            cout << "Entrada inválida.\n";
                                           // break; // Sale de la opción de señorita
                                        }

                                        if (b == 1) {
                                            cout << "\nTuvieron una noche loca. Te han robado todo. PERDISTE.\n";
                                        } else if (b == 2) {
                                            cout << "\nDecidiste alejarte.\n";
                                        } else {
                                            cout << "Opción no válida.\n";
                                        }
                                        break; // Sale del switch (y) case 1
                                    }
                                    case 2: // Inicio del case 1.1.1.2: Tomar Flacknar
                                        cout << "\nBebiste Flacknar. Te robaron todo.\n";
                                        break; // Sale del switch (y) case 2
                                    default:
                                        cout << "Opción no válida.\n";
                                        break; // Sale del switch (y) default
                                }
                               // break; // Sale del switch (ia) case 1
                            }
                            case 2: // Inicio del case 1.1.2: Nave CUBICCAX-4000
                                cout << "\nCompraste la nave CUBICCAX-4000.\n";
                                break; // Sale del switch (ia) case 2
                            case 3: // Inicio del case 1.1.3: Estafa
                                cout << "\nTe estafaron con la nave. Reza, Malena, reza.\n";
                             //   break; // Sale del switch (ia) case 3
                            default:
                                cout << "Opción no válida.\n";
                                break; // Sale del switch (ia) default
                        }
                        break; // Sale del switch (i) case 1
                    }
                    case 2: // Inicio del case 1.2: Show de Señoritas Espaciales
                        cout << "\nEl show fue impresionante.\n";
                        break; // Sale del switch (i) case 2
                    case 3: // Inicio del case 1.3: Tomar Flacknar
                        cout << "\nTomaste Flacknar. Te dormiste y te robaron.\n";
                        break; // Sale del switch (i) case 3
                    default:
                        cout << "Opción no válida.\n";
                        break; // Sale del switch (i) default
                }
                      system("clear");

                break; // Sale del switch (planeta) case 1
            } // Fin del case 1: Estación espacial Rocco Molopolk

            case 2: { // Inicio del case 2: Planeta TOXICO
                int eleccion_vehiculo, edad, eleccion_refugio; // Nombres más descriptivos

                cout << "****************************************************************************************************************\n";
                cout << "*                                        PLANETA TÓXICO                                 *\n";
                cout << "****************************************************************************************************************\n";
                cout << "\nHas llegado al planeta TOXICO.\n";
                cout << "Un planeta desértico donde solo hay tierra, plantas secas y edificios abandonados.\n";
                cout << "Los rayos del sol son muy fuertes y queman.\n";
cout << R"(
WWWNNNNWNNWWNWNNNWWWWWWWWWWWNNNNNNNNNNWWWNNNNNWWNNNNNNNNNNNWWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXNNXNNNNN
NWWWWWWWWWWWNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNWWWNNNWNNNNNNNNNNNNNNNNNNWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXNN
NWKxdddddddddxxxddddddddxxddddddddddoooddddddxdddddodxdddddddddddddddddddddddddoooddddddddddddddodddddoooooodooooold0XXN
WWk;,;;;,,,,,;;;;;;;;,,;;;;;;;;;;;;,,,;;;;,,,;:;,;;;;;;;;,,;;,,,;;;,,,,,;;;;;,,,,;;;,,,,,,,,,;,,',;;,,,'''',,'''''.,kXXN
WWOc;:ccc::::::ccccccccc:cccccccccccccllcc:ccclccclccccc::::::cc:::::::c::cc::::::;;::::;::;::;:cc::::::;;:;;;:c::,;xKXN
WW0lclllllcllllooollllllloooolllcclllllolllclllloolllllccccllllccccllcccclcllllclc::llllclccclccccccccc::clc:::cll:ckKXN
WW0ollodooooodddddddxxdoddddddddooooddddooooodooddoooooooloooooooolodolloolloooooollolodoooolllllllloooollllllclolclkXXX
NWKxddxxxxxxkkxkkkkkkkxxxxxxxkxxxxxxxxddxxxxddodxkxdddxxxxxkxxxxxddddddooxdddddxdxxxxddxdddxxddddddxxdodxdddodolooookKXN
WWKkkkkkkkkOOOOOOOOOOOOOOkkkOkkkkOOkkOOkkkkkocc:cdkOkkkkkkkkxkkkkkkkxxkxxkxxxxxxkxkkkkkkkkOkkxkkkkkkOkxkkxkxdxxdxxddOKXX
NNX000OOO00000000000000000OOOO00OOOOOO0OOOOdcoxc,,o00O0000OOOOOOOOOOOOOkkOkkkkkkkkkOOOkkO00OO00OOOOOOOOOOOOOOOOkkkxxOKXN
WWXK0K0000KKKKKKK00KKKKK0KK00K000KK000K00Odcokdl:;llx000KK000O000K0O00000000O000000000000KKK0000KKKKK000K000KK0OO00OOKNN
NNXKKKKKKXXXXXKKXKXXXKXXKKXXKKKKKKKK00KKxc:oxxolc;lxolkXXXXKKKKKKKKKKKXXXXKXXKKKXKKKXNXXXXXXXXXXXXXXXXXXXXXXXXXXXXK0OKNN
WNNXXXXXXNNXXXXXXXNNXXXXXNNXXXXXXXXXXKOl;,:dxdccl,;dxolkXNNNNXXNNXXNXNNNNNNNNNNNNNXNNWNNNNWNNNNNWNNNNNWNNNNNNNNNNNNK0KXN
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNWNNWNNN0d;,;,;cllcl:'cddddokNNNWWNWWNWWWWWWWWWNWWWWWWWWWWWWWWWWWWWWWWWWWWWNWWWWWWNWWWWX0KXX
NNNNWWWWWWWWWWWNNWWWWWWWWWWWWWWWXOxoc,;:,;c;,:l:;,:dddkkdkXNNXOxxxkOO0KNNWWWWWWWWWWWWWWMWWWWWWWWWWWWWWWWWWWWWWWWWWWX0KXX
NNNWWWWWWWMWWWWWWWWWWWWWWWMWNXOxlc:;;cc;;ll;,c:,:c;cdxkOxllddooddollc:cdkx0NWWWWWWMMMWWMMWWMWWMWX00XWWWWWWWWWWWWWWWN0KXX
WNNWWWWWWMMMMWWWMMMWXNWWNOoc:c::c:',oo;;ccc;;:..;;,';coolccoxxxdccdkko:lkdodOXWWMMMMWWWWWWWMMNOo::lookNWMMWWMWWWMWWX0KXX
NNWWWWWMMMWWMMMWWN0OkxOx:..'';;;:;col:cc;;,.'',:;..''.,clcclxxdl,:xxxdc:dkkxooxOXNWWNXXWWMNKx:,;okkxl:lkXWMWWWWWWWWX0KXX
NNKxoxk0KXNWMMWN0ookkxxdolc:,..;:cc;:c;,;lc,;::::;cooc,;:;,,:lol;cxdodl:ldO0Okxdooodxdddxxo:,;ldxkkxolclodkKNWWWWWMX0KXX
NNO:,;coodxkkkddolxxoccdxxxdol:;;'.;:;:ldd:';clclloc;,,;::;,',cc;coodlcdlcxOxddoolodxxxoc:coooodxOOxdxxdddooxxkO0XWX0KXX
NN0o;;oxxolllccoloxol;;dolcloxkxl:;::cllcclooolcokOxolllc;,;;,,;''coccxxl;:llcloddoc:llcoxOOkdodkkOkkkOkxddxkxdddxkkOKXX
NNKo;col:;;:llccldoc:',:;;ldxkkkkxxdolcc::;:clox0KKKKXKK0ko:;;,'.'ll;ldc;;coocll::c:;:coddddoloxkO000OOOOOxoodkkkOkkOKXX
NN0c;:::;:lc;:ldocccloooodooolccccllllllcccoolx0KKK00000000Okdl:'';,'',;:c:;;;;;cdxxxkOOxxdlcccloxxkxxxkOOOOxlldxkkkOKXX
NNOc:c:;:cclodolcldxkkkxkkOOOkkoclxxxdoollllldkOOkkkkkkkOOOOOOkxolc:;;:;,,;;:loxkkkOO0KK0OkxxxddoooddoodddddxxdlloxkOKXX
NN0o:,,:lloooodxxxolldooodddooc''::,,;:cclllllloodkkkkkkxdooooooooodddolccodkOO00O0K00KK0kooollodddkOOkkkxxdolool:cokKXX
NNOc:loddddxkkkkxdo:':ccloolcccllol:;lolllcc:::cdxxxdllooddxxxkkxxkkxdooox0K0OkkkkkkOxddoodxkkxdddoddddxkkkOOOkkkkOkOKXX
NNOlccllodk0KKKK0Okdc;;cododxkkOkxlcxO00K0OOkxxdddlc::okOOOxxxddddooodkkxxxddddxkxxdlldxkOOkxxxddoddddddxxxxxxxxddxxOKXN
NN0ddxxxkkkkOO000KKKK00Okkkxxkkxdook0KKKKKKKKKKKK00OkxxkkkdollloolloddolllodxO0000koldxxolcccooolodddxkOO000000OOkkkOKXX
NNX0OOOO00000000000K0KKKKKKKKXK0kkkkOOOOO00KKKXXKKKKKKXKKK0000KK00OkxoooooldkO00kdc;lolllllodkOOOO000OOkkkOO000KKKX00KXX
NNXKKXXKXXKKXKKXKKKXKKKKKKKKKKKKKKKKK00OOkkOOOO000OOOOOO00KKKKKKKKXXXK00kxdddddoc:clloddddddddddddxxkOOOkxxxkkkOOOOOOKXX
NNXXXXXXXXXXXXXXXKXXXKKXXXXXKKKKXKKKKKKKKKKKKKKKKKK000OOOOOkkkO0000Okc:xOO00OOkkxxxkOkkkkkkkxxddoooddxxxxxxxxxxdxxxxkKXX
NNNNXXXNNNXNNNXXXXNNXKXXXXXXXXKKKKKKKKXKKKKKKKKKKKKKKKKKKKKKK0000000o. :OKK0KKK00KKKKK00000000000KKKKKKKKKKKKKKKKKK0OKXX
NNXNWXXNXNWNNNNNNNNNXXXXNNNXXXKKXXXKKXXXXXXXXXXXXXKKKKKKKKKKKKKKKKKKx' ;OKKKKXXXXXXXXXXXXXXXXXXKKKXXXXXXXXXKKKKKKKK0OKXX
NNNXNWNXNNXNWWNNNNNNXNNNNNNNNXXXXXXXNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXKK0l.lXXXXXXNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXKOKXX
NNNWXNWNXNWNNNWWWWNNNNNNNNNNNNNNNNNNNNNWWNNNNNXXXXXXXXXXXXXXXXXNNXK00d;dXXXNNNNNNNNNNNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXKOKXX
NNNWWXKNNNNNWWNNNNNNWWWWWWNNNNNNNNNNNNNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXXX0KXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNK0KXX
NNXNNKkkKNNNNNWWWWNNNNNNNNNNWWWWWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXNXXNXXXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNK0KXX
NNNKKXXKKKXXXKKKKXXXXXXXXXKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK00000KK00000KK0KKK00KKKKKKKKKKKKXXXXXXXXXXXXXXXXXXXXK0KXX
NNNXXXKKXKKXXXKKXXXXXXXKKKKKKXXXXXXXXXXXXXXXXXXXXXXKKKKKKKKKKKKKKKKKKXXKKKXXXKKXKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKXXX
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXNNNNNNNNNNNNNNNNNNNNNNNXXXXNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXX
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXXXNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXX
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXNNNNNNNNNNNXXXXXXXXXXNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXX            
)";

cout << "\nPresiona ENTER para continuar...";
cin.ignore(); // si venís de un cin >> 
cin.get();    // esperar que presione ENTER
  

                cout << "\nEl sol está por salir... tienes que buscar un refugio.\n";
             
cout << R"(
                                                                               
                                                                                
                                                                                
                                                                                
                             ....................  .                            
                          ...',,;;,.',,;;'','..........                         
                      ......';;;:lc,',,;:::'''',,'........                      
                    ....'','';::;;c;''.'':,.,'',,'''...'.....                   
                 .....'',,;;.';:;',:;,..''.''.';,'.,,'''''......                
               .....',;;:;;:;;;;;:::,:;',,,,..':'...,''.'''......               
             ...'''''',;cc::ccoo::o:,:occc:;,.::''',;,'..'..'.....              
            ...''';::;',;:clc,;ol;:c,,dd:llcclo:;;;cc,.....,'..'....            
           ..'','',:c:ccc:;:l:,;l:';:;:odccxko;;;,loc'..'.';;;;,'...            
          ..',;;'',::,,:ll:;;::coc',o:,cl,'dd',lc;:;'';,,;,''''..''...          
          .,;;;:;,',::;::coc'..',,',c:,;,',;'.;;..'',cc;:;'..''''......         
         ..',,,,;;;,,;::,;co:....',;::::;;;::;..','';;;;;;;;;,'','.....         
        ..''',;:;,,,;;;,....',.';:,'........,,,;,',ldoolc;;;,'.''..'...         
        .',,;::cooc,,;:::,,'..';;'.          .,;;;;;,;ccc:::,...',;,'...        
        .''',;::cll:,;,,,,,'',;:'.            .'::,'':cccccc;'..',,'.....       
       ..'..,;;:cc::lddc;'...,:,.              .;::;:::llc:,,;;,,,,'.....       
        ..',;::cllccclol:'...':;.              .;:,,'..,;:ccc;,,,'''''...       
        .''',;:::cc::::clc;'''::.             .'::;,,;;'.',;::;;,,;:;,...       
        ..',,,,,;;;;'''':oc..';;;'.          .,:;'','.,:;'...,;;;;,,,'..        
        ....',;;;:c:;,,;c:'.....,:;,.......',;:;'.',,...;llcccllcc:,''..        
         ...',;:;;::;:::,'..','''',,,;,,;;,,,;,...':ol;;'';:c:;'.''....         
         ..',:c:,''.',,,'';;:lcc:;,..'',:,.'.,c:'.,cdo,,;,,;;;;,,,'....         
          ..;:;,,;;:cll,.;c;,cdl;,'.';':xl,''.,:;;;,,:;,,;:,'';;;,'...          
           .',,,;;,;cc:'.;;,,::,;c,.cc'lkdl:;'..',:;..',,,,,,,'.'....           
            ..',,,,:cc;'';;';c;;;;:,,;,lxocol,'.,;:lc,..,;,,,,,'....            
             ....;cl:;;,;,'cdc,'';lc',;:lloollc..:lll:,',;,,,'....              
               ..,,,,,,...;oo;,,;:cl,,;..'cl::c:.':lc:;,'',,,'..                
                 ..''''..';:l:,,:::c;,;,'',;,',,,,,'',;::,'....                 
                  ....''..,;;;,,,';::;,,';:;,..'''''..,;;'..                    
                      ......'',,'';::,',,;;,''.'''.''.....                      
                          ....''..',,'..',,'''.........                         
                              . ................                                
                                                                         ..'..  
                                                                        .','.   
                                                                        ..      
                                                                                


)";
cout << "\nPresiona ENTER para continuar...";
cin.ignore(); // si venís de un cin >> 
cin.get();    // esperar a que presione ENTER
                cout << "Los lugares están a 20 km, tienes la suerte de tener dos vehículos cerca…"; 
                cout << R"(
MMMMMMMMMMMMMMMMMMMMMMMMWNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMM
MMMMMMMMMMW0kkkkkkkOOOOkl,l0X0OOkxxdddxKWWMMMMMMMMMMWNNXXNMMWWWNXKKXWNXXNNNMMMMM
MMMMMMMMMMWO:','':dxkOOxc':k0OO0OOkxxkONWMMMMMW0xdool;;;;cxxlx0Oo,,dkl,cxk0NMMMM
MMMMMMMMMMMWX0kdkXMMMMMNKdokXMMMMMMMMMMMMMMMMMMNK0OOk:';:,...l0Kkc,:dxx0NWMMMMMM
MMMMMMMMMMMMMMWXNMMMMWXOkdcdKWMMMMMMMMMMMMMMMMMMMMMKo;;,,'''.,lxkd,.;xXWMMMMMMMM
MMMMMMMMMMMMMMMXXMMMNKOxl,.c0NMMMMMMMMMMMMMMWWWWWMNo.,lollc;;...:xd:;o0WMMMMMMMM
MMMMMMMMMMMMMMM0kXWX0kl;'..,dkKWMMMMMMMMMW0dc:;:oxl..;ccoxO0Oc...:xl;oONMMMMMMMM
MMMMMMMMMWNXNWM0lkKOo;.',:dkxldXMMMMMMMX0d,.'........;lxKNWWNx'..;dxOXKXWMMMMMMM
MMMMMMMWOl;,:dKKkkxc:c:'cOXXKOx0WMMMMMMWNX0Okdlc,....l0KNNNWWk,',,:ldxx0WMMMMMMM
MMMMMMWx'.:l:,;xkc'ckl'.:xlc;'';lkXMMMWKOxoc:;;cdd;..c0XXXXNXx,..,lOk,;0MMMMMMMM
MMMMMM0,'dNNKo,'..,kd'.,xl......'':ONKd,....... 'xd. 'dKXXXOl;,';dO0O:'oKWMMMMMM
MMMMMNo.lXNXOo,..'dx;.'kXl..l0o,:c';l,....','.'. ';..'l0XX0o;;;''::,....,xNMMMMM
MMMMMXc'xKkddkd,.,:;..oN0:.lXNk;lOl'':,...',;,... ..;clxO0Oc....'''. .,,.'lKWMMM
MMMMMK:,oocoddc'..'..cXWx'.lXX0c:OO:';'..''',,....';cllokkx;  ..:oc'.;c;;..cKMMM
MMMMMKc;c,...,,.....,OWNo..:OXOo:kXo''...........;::cllldOx;....'oo,....,;..oNMM
MMMMMXo;dd;',cl,... .cxOl.,;okl,,oKk,............,;,;ccclxx:'''..,;. ..'',..;0WM
MMMMMWx;dXKOxc;......:0Kl'co:;,''c0O,.'...'''.....',;:cccoxc'''.....  .'''..'xWM
MMMMMM0ccONNNKl...,;lOWNd,l0K0OkxOXO,.cc''.'.. .......',;:ll,......''..:d:. .dNM
MMMMMMNx:l0NNKc.:OXWMMMWO:cONNXXKXNk..xKko,...   'c:..   ..;,..'..'cc;,;c,. .xWM
MMMMMMMXd;:oo;.,0WMMMMMMXo;dXNNNNWXl.,0WWKo;.. .cONNKkololc::::c;..,cxkl;.  ;0MM
MMMMMMMMNx;...c0WMMMMMMMWO::xXNNNNk,.lNMMWNX0OkkOkkxxkkO0KXXXXXXO:..':o:.  .dNMM
MMMMMMMMMWX0k0XWWWWMMMMMMNx::o0XKx,.,0MMMMMMMMMMWWNXK0OkxxxxxxkO0kc'....  'xNMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMNk:',;,..;OWMMMMMMMMMMMMMMMMMMMWWNXXKKKX0d:,'.'c0WMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMN0o:,',dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXXKXNWMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
)";
                cout << "elije uno:\n";
                cout << "1) MOTO\n2) BICI\nElije: ";
                cin >> eleccion_vehiculo;
//----------------------------------------------------------------
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida.\n";
                    break; // Sale del switch (case 2), vuelve al menú principal
                }

                if (eleccion_vehiculo == 1) {
                    cout << "Para conducir la Moto tienes que ser mayor de edad...\n";
                    cout << "Ingrese su edad: ";
                    cin >> edad;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Entrada inválida para la edad.\n";
 

                        cout << "¡Qué pena! Los lugares están muy lejos, te vas a morir...\n"; // Asumimos el peor caso
  

                    } else {
                        if (edad >= 18) {
                            cout << "¡Felicidades, eres mayor de edad, aquí te dejo la llave!\n";
   cout << R"(
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxl:::lxXWMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOo;........,dXMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOo;....,:l:'....,xNMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKo,....;okKNWN0o'  ..;kNMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkc.  ..cOXWMMMMMMMKl. ...c0WMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNxl;. .....,loxOKXWMMMWW0c. ..,dXWMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc.  ...........'';cldxOKNNO:...':kNMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd. ....         .......';:lod; .'.'oKWMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWl   ...          .'.........'...'''';kWMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl  .....         .',,,,.... ...'''''',oXMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWo........    .....';;;,',,'...  ..'''',lKMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd..........    .'.';;;;,,,',,,''.....'''oXM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk...........    ...',,'';;,,,,''''....',oXM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK:............    .',........... ..,'.'c0WM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWx'.......'.''..   .',..  ..... .';,':xXWMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOc.....'''''','''..  ..''.. .... ..';oKWWMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXx;.  ......''',,,,,,'......'. ......,oKWWMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKd,.. .........',,,;;;;;,,'.........';oKWMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMW0o,...'coc,''..':xdc;;;;;;;;;;,....'';d0NMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMN0d:'.':odolodxl:lONWWX0Okxdolllc::;;;cxKWWMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMWNOl::::oddoodxdddkKWMWMWWMMMMWWNXXKK000KNWMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMWKxc;;:lxxdodkxdxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMWMW0o:',;ldxddxkkxkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMWWXx;.';lddooxkxxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWXx:'':oooooxddk0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMWKx:,,coollododkKWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMN0dc;:odolloxkkOXWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMWN0dlclddolodxOXWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMWXOdlldxddddxkKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMWXOdodxkxddxkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMNOddxkkxxxk0KNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMW0xxkxxxkO0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMNOxdxkO0KNWMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWNKKNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM

                            )";
                        } else {
                            cout << "¡Qué pena! Los lugares están muy lejos, te vas a morir...\n";
                            cout << "¡Pero puedes intentarlo y pedalear muy rápido!\n";
                        }
                    }
                } else if (eleccion_vehiculo == 2) { // Mejor manejar explícitamente la opción 2
                    cout << "¡Qué pena! Los lugares están muy lejos, te vas a morir...\n";
                    cout << "¡Pero puedes intentarlo y pedalear muy rápido!\n";
                } else {
                    cout << "Opción de vehículo no válida. El sol te alcanza...\n";
                    break; // Sale del switch (case 2), vuelve al menú principal
                }

                cout << "¡Rápido! El sol ya está saliendo. Elije un refugio:\n";
                cout << "1) Un túnel secreto\n2) Una casa pasando la colina\nElije: ";
                cin >> eleccion_refugio;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida.\n";
                    break; // Sale del switch (case 2), vuelve al menú principal
                }

                if (eleccion_refugio == 1) {
                    cout << "Estás en el túnel secreto. Es un túnel peligroso y tienes que pasar por 3 tramos...\n";
                    cout << R"(
        .;.. .,:clc::cc:,.....              ............                   ......
        .,.  .;llolc:;::,..             ...'',,,,;;,'.'''.....                ....
        ..;c,...;lllc:;;,.             ..,;:::;;;;clc:;;;;;;;;,''....      .       .
        'lko'..,;:::;;;;.           .',,:::clllollllcclc:;,;::;;;::;'..      .'.    
        .;;'.':c::;,....         ..,:c:clolllloc:c::c:,....','.',;:cc:,'.    ..     
    ..,,...;llc,'..          .,::clooool::c:,'''.';c:,'.',;,'',;;:c:;:;'..        
    ..:lll:;;:;;,...         .;cc::lolc::cc:;,''.....;:;...,clool::;;;'';c:,..      
    'lOOddxl;;'....         .:lcc;:lc;'....           ..    .'','....',;;;;,,'..    
    kkxxdol;,,'...         .,:c:,''..                       ...       .;;',:lo:..   
    0klc:,...'..          .;c:'...     .....'''.......      ....       ';',:loo:;'. 
    ll:;;'.....         .,:::'.   ..',,,;;:ccc;''','''.''..  ....      .clc;;:cccc:'
    '.........       .'.':::,.  .',;;,..''''''...........'''..          .ldoc,.';;,;
    .........        ;;':l;.  .',,;;.           ....   .....''...        .'cl:'''..'
    c''..  ..       .,':c;. .':;',;...   .............. .....''''..       ..',.';:,'
    :;,.   ..       ',,c:.  ':c;'.  ............''''.... ......''....     .'''..,:::
    ;:,..  .        .';:'  .;l:,'.  ........  .......'''..  ...''.....      .;' .'.'
    :c;..  .        .':;.  .cl;..  .'..............  .',,'.   .....'....     ':,....
    ':;.   .       .';:,.  .cc:'  ';.............''..  .,,,.    .........  .  ..'...
    .':,....       .,,;,.  .cl:. .,.  .............,..  .','.   ..,'.'... .,. .. ...
    ..,,.           .',;.  .;c:. .,. ............. ...  .'','.. ..';,''''..,,. ..   
    ...  ..       .;,;'   .::' .,,.............. ...  .;'''..  .,;,'..'. ':.  ..  
    ....'.          .ol:,.   .,;'..,;,....'.....'. .,.  ':'''..  .,;,...,'. ..  ..'.
    :;..''.      .  .cxo:..    .;;...,;,'.......  .'.  .;;''..   .,;,,..''.    .....
    ;:;'','.      ...,:::'..    .,;,.....  .    ....   ';,'...   .,,''..',.   ......
    ..';;;;;'..    .':c:;'....    ...,,'',,...','.    .;,,'..   ..,,'...''.   .....'
    ...';c:::,.      .,:c:,....         .,,,;;,..   ..,'...    .',,''.....   ...'..'
    ....';cc::,...    ...,;::,...           .    .........    .';:,',...... ...''...
    ....,::cl:,...     ..,,''........  .....',,'.......   ...,:,','. .  ..........
    .''.',,:lcc,..         .........',,,;;,'......     ..'.';;,,'...  .......''..
    .   .,;'....,:c:,..           ...............        .''.,::;,....    .....',,..
    ...''.......',''...                            ..,,'',;;,,'..       ....'','.
        ........','......'......             .  ...',,,'..';:;,,..   .   .......''''
        ........'',,'''''',,''''...',,,,;;;::c:;;;'.'',;,,,'.     .   .....';;,',
        ....  ..    ..',''',;;,,;;;;,;;:;;;::::;,''''',;;,''... .   .    .....'::;,,
        ......''...............,;,,,,,,,,......'',;;,,''''...    .    ......',,,'.'
            ............'......,;,',;,'''''',,,,'....'.......     . .'..;cc:'..';
                        ...........''''....'.......... .. ...    ....'''';lo:,';:c
    ..                     ..',,.... ................    .        ..'''',;::,,;,';;,
    ;,'..       ...                       ....... ..              ...,;;::::;,,,'.''
    ,,;::;;,,...                       ...          ...       ........';::,',;;;,...

    )";
                    cout << "\nPresiona ENTER para continuar...";
cin.ignore(); // si venís de un cin >> anterior
cin.get();    // esperar ell enter
                    cout << "Tramo 1: ves ratas hambrientas.\n";
                    cout << R"(
K0O000OO000K0O000000000000O0OOOOOkOOkOOkOOkkkkOkkkxxkkkkkkkkkkkkkkOOOOOO00000OKN
Nxcclccclllllllooollllooollllc;;,',,,;;;;;,,,,;;,,'''''''''''''''',,,,,,,;;;;;dX
Nklccc:cccccccccllllooodoooollc;,;:::::::::;;::c:;;,'.......''....''''''',,,,;dN
Nxlccccccc:ccc:::looooddolllolcc::::;::;;::::cccccc:;;,''.........'....'''',,,dN
Nklcccc::c::;;;;;:llooollccllccc;,;,,;;;;;;;;::cccccc::::,'..........'''''''',dN
Nkccccc::::;;,',;;:cclllc;,;ccccc;'',,,,,,,,,;;:::::::::c:;,.........'''''''',dN
Nx::ccc:::::;;,;;;;:::::;,',;;:clc,...''',,',,,,,,;;:;;;::::;'...........'..',dN
Nd;::ccc:;;;;;;;;;;;:::::::;;;;;;;:;'....''..'''''',,,;;;;:::;,..............,dN
Xo;:::::;;,,;;,,;;;;;;cl:;:c;;;,,;:::;,'''....'''''.'',;;;:;;;;'.............,xN
0c',;;;;;;,,,,,',,,;::cc:,,col:;:::::::;;;,.........''''',::;;;,.............'dW
0l',,'',,,,,,,''''';c;:cc:,cdo:;;;;;;:;;;::,.......'',;'',;::;:;.............'dN
Xl''.'.'''','''',',:l;';c:;col:;;;,,;;::;;;:'.........,''',;;:lc'............,xW
Nkc;'.....''.'''',,,;::::;;;;,,',;;;:::ccc:c;..........',,;:::lo,.    ....''.,xN
Nkllc,.........',,,,,,,;,'''''''';:;:ccc:ccc;.. .......',,;::cld:..'. ...',;;:kN
Nxoooc'....'......''''.''''.'',,',,;;:clllcc;.........'',,::cll:;,,,...,;,,,,:kN
Nxoollc'..,;,..',;::;:::::;,,',.....',:lllll:'.........',,:cll:,''....'',;;:;:kN
Nxlllll:;,;:;,;clloollooolooolc;'..''',cllllo;.'....',,,,;:llll;;:'......,;:::xN
Nx:;c:'..';cc::looool;'';cooooooool;'',:ccloo:'''..,;;;,;;coc:::::'.......,;;:kW
No..;;''''';;,,:clcldl::ldxdolooddxd:,',,;cll:,,''',;:;;,.,c:cc;;;,''...'',cclOW
Nd'.',;::;'.';,;;;:clooolllllclloooc:;;;;;;clc,''',,;::lc:::cc;;:;,,',,''';loo0W
Nx:;,'',:;,,::,;;:::cccclllll:::;,'';::cl:,:l;'..,:llc:c::cc:::;,,;;;:;,'':lodOW
Nxcc:;'..',,,',;::;;::looooc:;'......,::;,;::'.';cllc;,;;:clc;'...'''''',colloOW
Nxc:;;,,;;;,''',,,;;;;cllc:;,,,'..',,',::;,,'..';;;,',,;;clc,.........,',::;coOW
Nd;,,;::;;;,,,'''''''',,'.''';:ccloddooxxkOOkddo:...';::::;,;;;;::;,'',,,;::coOW
Xo,,,;:;,,,',,,;::;;,,'........';ooloxKNNNWWWNNXkcclc,....''',;;,;:::::::cccclOW
Xl',,;;;,''''';:::cc;',;;,.....'coodOXWWWWWWWWWWXkdoc;,'.''''','',,;:;,,;;;;;:kN
Xl'',;,,''''',cc;;:c:,;;::,,,,,:lodkKWMWMWWWWWNNNXd;;c::::;,',,,,,,,,,;,,',::;xW
Xl.',,''...'',cc;:;;;;;,,''',,,coxdd0WWWWWWWNNXKOl;;ccc:;:c:;;;,;;;,,,,'...,;:OW
Xl''''''...''',:;::;;;:;,''.,;lxxkkx0WWWWWNNNNX0d;;;:c:::;;,,;;,,''','',,'...,kW
Xl',,'','...''',;:::::::;::clodllokOXWWX0000KK0Od;;;,',;:;;;;;;,,;,'''''''''.,kW
K:...........'',,,;;:ccccc:;;;::cokOKKKkdddxxkkko;;;,',,;cc:cc:;;;::'.','''..,kW
X:....    ....'''''',,,'...',;clcodkkkkdooolooooc;;:,''.',;:;;;;;,;;:;'..','';kW
Xc..... ..............   .....':c:lddddooolclllc;'',,,'..',;:;,,,;;;:c;'.....,kW
Xl'.....';:llclol:'.        ....,;;:cccccclc:cl:'.''','..',,,;;;;;,;:::'.....'xW
Xl,'..',;:codoodxxxo,.     ...  .',;,,;:::c::cc;..''..'..''.',,,,,,,,;;,.....'xW
Xo;::,';:;;::cc:coddc'.......'.. .;,,'',,;;::c:;''..'.......','''''',;;;;'. ..xW
Xl'''.',;;;,'',;:ccc:;,,''',;;;,.',,'..'',;;::::,..','......,,'.','..';::;'. .dW
Xo:;;,'''',,,'.,;;;,''',;;;:c::,,'''.....',,,,,,,',,,,...,,,,,,'......,;'.''..dW
Xdllc;;;;;;;,'..',;;'.'',,codddl,...............',;:;,'',,.',,'......'','.....dW
Xdllc::;:cool;;:::;,....,::;:ldd;.   ..''...  ...,;;,'.......;;'.''.'''',,'...xW
Kl:::lolllool;,:c::;;...',;;;,,,...  ...'''.....';;,,'...'....''.,,,,,'';;,...dW
Kl,'.;cllddddollodoc;,',,;::::;;;,..  ..........',,;,,,'.........',;:;;,,;'...xW
Kl,:;,;;,;;,,;clloo:'''.':odxxxdoc;.. .........'..'',;;'. ......',,,;;;;'....;OW
Xxclccolcll:,'''',,,,,;'..':llcoocc;..............',,;;,'.......,;;,,,,'....;o0W
N0kxdoolccloodddooolclllcccllcclddxxdl:;::::::::cccllllclcccccccllllolc::;codxKW
WWWNNWWNNNNNNNNNNWWNNNNNNNWNNNNNNNXKXXKKKKXXKXNNNNNNNNNNNNNNNNNNNNNWNNNNNNNNNNWW
WMMWWWWWMWWMWWWMWMWWMMWWWWMWWWWWMWXKXXXXKXXK0XWWWWWWWWWWWWWWWWWWWWWWWWWWWWMWWWWW
)";
cin.ignore(); // si venís de un cin >> anterior
cin.get();    // esperar el enter
                    cout << "Tramo 2: el túnel se vuelve muy oscuro y escuchas ruidos.\n";
                  cout << R"(
       .'..','..........;:;,'':c:,''''..... ........'..  ...                ..'.
      .,,.,:,..  ....,;,'';ccc:,,,,,'......        ............      .       .',
      ':',c;..  ..';,'...';::::::;,'......  ....      ....  .....           ...,
     .,,';,.  ..',,'''''''','..........''...........     ..   . .  .         ..'
     .;:;'.....'''',;;'........  ...'''''',,,,;;'.''..    ...  .......    .   ..
     .:;........';;;,......     ......    ..',clc:,'',,.....'..  ..','..      .'
 .  .;;.... ...,:;......      .';::;,'........',;:ccllc:;'.  ...    ..'..       
 ...,;......';;;'.....     ..;clllllc:;,',,'',''..';:ccc:;'......     ....      
 ..,:,.....,;:;'.....    ..':clllllc;'.......'''''''...,:llc:;,...     ...      
 .;:;'.....';;. ....   'cllllc:,''....      ..''''''',...';::;::'..   ....      
.';,..''......  ..   'cllc:;'''........    ..',;,,'.........,;';;,'.   .....    
',;.............. .,ldc;;,,,,;;,,,;:;,,'.....  ...'',;,..''.....';:;..   .'...  
,,,....''.  .''..'cxdc;;'',;:cclc;;:ccccllol:,,'.  ..';:;......'','.',.   ..;,. 
,'..  .''. .;:',coolc;''.,:lddlc:;::cc::::cllodddc,.. .'cc,....'','...'.   .';'.
...  ..'.. .:;'ldlcc;'.',lxdc::;;;;,;:;,,;;;;;;::clo:....;:,.',;'.,. ...    .,,'
..   ....  ':,cxoll;..'':oocc::::::::;,,,,,,;,,,,,,:do;...';:clc;'',...     .',,
..     ....;clxxol:..,;,:lllc;,;::clloddddol:;;::;;;:oxc. .,:ldo,','...    ...'.
..     ...'codxdcc;..cc;cl:c:',:clx0XNWWWWWNKkl:;;:c,,cdc...;;,c;.''....   .....
.. .. ....,lddoc;;'.'oololcl;;c:l0NWWWWWWWWWWWXx:;:c:.'lx; .,'.:c,,,. ..   ....'
.  ......':oddl;;,..'oo:::cc;clckNWWMMMMWWWMWWWXd:;,:,.cxl..;;:l:::.  ..   ...'.
. .......;oxxxo:::..,ll:;,;ccc:c0WWMMMMWMWWWMMWNk:',;..cxo. ';cc';c.   ..    .,.
'........,ldkxdl:;. .;cc;',clc:ckNWWMWKOOXMMMWWXd,,:;.'ldc. ',cc,:c'    ..   .,.
,.........'cxdolc;.  .;cc,,lc;;;ckNWWKc..lNWWWKd:;::;'cdd;..';c:;l:..  .........
;,.......'.;oolol;..  'coc,:c,,,,:odc.. ..;dOxc::::c:coo:. .;ll,:o,.   ...'. .. 
';,'.....;,'cddoc:,...,c::ccc:,;;::,.      .,:::cc::coo:'..,lo;'c;.  ...'.'...  
.,,'.   .'...ldllll;'',cl:,col:;:cc;.      .',,,;;:ldd;. .,lo;.;'    ...''''.   
 .''..   ... .cdkkdo:';::c:;cooll::'        ',,;:lool,. .;loc,:,.   ...''....   
 ......   ... .;ldxxo;';:c:;:ccclcc,       .:loolc,.....:loocll.   . .''....   .
  ....... .'.. .;dxolo;..;odlc:;;:;'.......;c::;.....,:lolcll;'.  ...,,',.     .
   .'.......;,...:xxc:ol;,:lollc:;;,,,'........ ..,;cccll;;,,;. ....';;,.      .
   .',,......,'...,odl::ccclloxxdl:;,,....''''',:ccc:;:;........'''',:;.        
    ..,'.....','....'ldocccccllc::::;,'',,;;;:::cclol;..'....'......,..        .
      ...,.........   .,lddolc:;;;,,,,,,;;::clooddl:,''....';.  ..'..         .'
         .,,'.........   .','';coooolccllllodxxdl;,,..........',;;,.       .....
           .,,,''''...        .';::ccclccc:clc:,'.........';'..''.       ......,
             .....'........          ......,,'........',:cl:'''..     .......';;
          ..      ..............     ..........'....'',,,'....       .....'''''.
            .        ..................''''......,,'....           ..  ...'.....
                                          ........                ...    ....   
 ....                             .........',,'...                        ..  ..
  ...             ....  ....................',:c:'..       .....        ....  ':

)";  
                    cout << "\nPresiona ENTER para continuar...";
cin.ignore(); // si venís de un cin >> anterior
cin.get();    // espera que presione enter
                    cout << "Tramo 3: sentís algo respirando en tu nuca.\n¿Qué haces?\n";
                    cout << R"(
MMWNNNWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MWXKKKXXXXXXXXXXNNNNNNNXNNNNNNNNKkxxkkkkOO0KKXXXXXXXNNWWWWWWWMMMMMMMMMMMMWWMMMMM
MNKKKKKKKKKKKKKKXXXXXXXXXKXXKXOc,...........'',,,,,,,;;;::::coxk0XNNNNNNNXXXNWMM
WNKKKKKKKKKKKKKXXXXXXXXXXXXXKk;................................'cdk0XXKKKKKKXWMM
WNKXXKKKKKKKKXXXXXXXXXXXXKXKx,.......... .. ......................;lx0XKKKKKXWMM
WXKXKKXKKKKKXXXXXXXXXXXXXXKk,...........................  .........',lOKKKKKXWMM
WXKXXXXKKKKKXXXXXXXXXXXXXKOc........................  ....  .........'cOXKKKXWMM
WNKXKKXKKKKKXXXXXXXXXXXXX0o...............''................ .........'oKXXXNWMM
WXXXKKXXXXXXXXXXXXXXXXXXXk,................'.....,;,'''................:OXXKXWMM
WXKKKKXXXXXXXXXXXXXXXXXXKl. .........................,,''...............dXXKXNMM
WXXXKKKKXXXXXXXXXXXXXXXX0; ......,,'..''''...,,'.....',,................:0XXXNMM
WXXXXKKKXXXXXXXXXXXXXXXXx. .....';:,.........'''''......................,OXXXNMM
WXXXXXXXXXXXXXXXXXXXXXXKl. .....'''.............','.....................'xXKKNMM
WXXXXXXXXXXXXXXXXXXXXXXKl. ......................,;,'....................lKXXNWM
WXXXXXXXXXXXXXXXXXXXKxc;........................''..'..'.................oXXXNWM
WNXXXXXXXXXXXXXXXXXXd..........................'.........................oXXXNWM
WNXXXXXXXXXXXXXXXXXKc........................',,'.''.....................l0XXNMM
WNXXXXXXXXXXXXXXXXXKl..............''''.....',,,..''.....  ...............,xXNMM
WNXXXXXXXXXXXXXXXXXXd...............';,.......'.......'.    ...............oXWMM
WNXXXXXXXXXXXXXXXXXX0;........................'...''....   ...............'kXNMM
WNXXXXXXXXXXXXXXXXXXXo............,,'.......',,'...'....   ...............lKXWMM
MNXXXXXXXXXXXXXXXNXXNKc.........'',;;,'','...''.'.......  ...............;OXNWMM
MNXXXXXXXXXXXXXXXNNXNN0l'.......',,,,'',;'',............................'xXXXWMM
WNXXXXXXXXXXXXXXXNXXXXXXO:.......'',,',,'..'...........................'dKXXXWMM
MNXXXXXXXXXXXXXXXXXXXNXXXo.......,,,,''''''''.'......................':kXXXXXNMM
MWXXXXXXXXXXXXXXXXXXXXXN0:.......,:;'.';;:::::;,,'.................;k0KXXXXXXNMM
MNXXXXXXXXXXXXXXXXXXXXXKl........','',;:cloolcc:;;'................oXXXXXXXXXNMM
MNXXXXXXXXXXXXXXXXXXKOd;.........'''';;:clolcllc:;,'..............'kNXXXXXXXXNMM
WNXXXXXXXXXXXXXKOxoc,..........';:cloooddkkolool:;::;,,'..........;0NXXXXXXXXNMM
MWXXXXXXXXKOkxxl,............,:cclloddooodddxxdc:::c:;,,'.........:KXXXXXXXXXNMM
WNXXX0kkkkdooodo:,......',;,,:lllllllodxxkkOkxl:;,''',,,''''.......oKXXXXXXXXNMM
N0xoc::cclodool:,'.....,;c:,,:llllc:coxkO0KXK0kolc;;,'..'',,,,''....;d0XXXXXXWMM
0:,:loolccoollc;,'.'',,;,:llcldkxoollox0XXXXKKOkkxooxdc,.....'',,'',..'cx0XXXWMM
Xxddoooo:,;:,;cc;'..,cc,,:odxxkOkxkkkO0XNXXXK0kkkxxk000kdc,'.,,,;,,:;,'..,cd0NMM
NOdoc;;:,.....,,,,'.;ccc;;coooxOOOO00KXXXXXK0Okk0OkkO0000Oxdllc;,'',::,,'...:0MM
Xxc'...........':cclddool;;:cokOOkkOKXXXXXX0OOO0KKKKOOO00000OOkdc:,.',,,,;:;c0WW
Nx;'............;dkxkO0OxlcldxOOO00KXXXXXXKOOOkO000KK0OkO0000Oko:;,....';:cldKWW
Wx,.......';:;,';dOOOK0kOOkxO0O0KKKXXXXXXX0O00kO000KKK0OOO0OOOOOkdlc;,',;::cdXMM
Wk,.....'',lkOxddxOKXK00OOOO000KKKXXXXXXXXKKKOkOOKXKXXKK0OkkkkO0KOxxdoccdkkxkXMM
MO;.'..,cloxO000KK0KKKKK000OOOO0KKXXXXXXXXK0KOk0O0XXXXXKK00000OOOkxxoloxkkkdONMM
MKo;,',lxxk00KKKKKKKKKKKKK0OOk0KKKKXXXXXXXXXKOk0O0KKKKKK0OOO0000Oxlll::lccldONMM
WXxoooxkxx0KKKXXKKKKKKKKK0000O0KKKXXXXXXXX0KXK00KKXXKOO0Okxxkkkkkdc;;;:ldxxOKWMM
WXxdk00000KKKXXXXXXXXKXKKXKK00KKKKXXXXXXXX00XXXKKKXXKOkkxdolcclclc;;codxO00KNWMM
MXkk0000KKKKXXXXXXXXXXXXKKKKKKXKKXXXXXXK0KXXXXK000KXXKkdxkkxl;''''..,:lxO0KKNWMM
MWX0OOO0KKKXXXXXXXXXXXXKKKKKKKXKXXXXXXXK0KKXXXK0KKXXXXKOkO0Okdl;::;,,cdkkO0KXNWM
MMWX00000KKXXXXXXXXXXX00XXXKKXKKXXXXXXXXKKKXNXXKKXXXXXXK0kkOkdddooddddddkkOO0KNM
MMMWXKK0KKKKXXXXXXKKX0OKXXXKXXKXXXXXXXXKKKXXXXXOx0XXXXXXK0OO0xdxkkkkkkxdxkOO0KXW
MMMWXKKKKXKXXXXXXXKXXKKXXXXXXXXXXXXXXXXK0KXXXXXXxoKNXXXXXK0O00kxxkkxxddooxxO00XW
MMMWXKKXKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKKXXXXNKddKNXNXXXK00K0kxxddxdddxkkOO00X
MMWNXKKXKKKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXKXXXXXXXXKxdkXNXXXXK0K00kxdxxxdddxxkOOOX
MMWXXXXXXXXKKXXXXXXXXXXXXXXXXXXXXXXKXXXXXXXXXXXXXXXOoONXXXXXKK00OkkkxdxxxxxdxO0X
MMWNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWWWXXXXXXXXXNNNNXXXXOOXNXXXXXXKKKOkO00OkxxkkO0XW
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWMWWWWWNNWWNNNWWWWWNXXXXKK000KKXNNW
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNXXNNWWWMMM
)";  
                    cout << "1) Sigues caminando por el túnel\n";
                    cout << "2) Sales corriendo hacia afuera\nElije: ";
                    int eleccion_tunel;
                    cin >> eleccion_tunel;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Entrada inválida.\n";
                        // Considerar qué pasa aquí, quizás el personaje muere
                        cout << "Te quedas paralizado por la indecisión y algo te atrapa en la oscuridad.\n";
                        break; // Sale del switch (case 2), vuelve al menú principal
                    }

                    if (eleccion_tunel == 1) {
                        cout << "¡Felicidades! Atravesaste los 3 tramos y llegaste a la fábrica abandonada.\n";
                        cout << "Te recomiendo cerrar la puerta del túnel así no entra la rata gigante.\n";
                        cout << "Fin de la aventura. Volviendo al menú principal...\n";
                    } else if (eleccion_tunel == 2){
                        cout << "¡Has escapado del túnel y el sol está en su punto más alto!\n";
                        cout << "Perdiste, te moriste.\nVolviendo al menú principal...\n";
                    } else {
                        cout << "Opción no válida en el túnel. La indecisión te cuesta caro.\n";
                    }
                } else if (eleccion_refugio == 2) {
                     cout << "Llegas a la casa justo a tiempo. Parece segura por ahora...\n";
                     cout << "Fin de la aventura. Volviendo al menú principal...\n";  }
                else {
                    cout << "Opción de refugio no válida. El sol te consume.\n";
                }
                  system("clear");

                break; // Sale del switch (planeta) case 2
            } // Fin del case 2: Planeta TOXICO

            case 3: { // Inicio del case 3: Planeta Circia
                bool quiere_visitar_zona_peligrosa = false;
                for (int intento = 1; intento <= 3; intento++) {
                    cout << "Has elegido un planeta donde visitarás zonas que pueden no gustarte... Para continuar presion 's' o 'n' para irte (s/n): ";
                    char opcion;
                    cin >> opcion;

                    if (cin.fail()) { // Manejo de error si no se ingresa un char
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Entrada inválida. Por favor, usá 's' o 'n'.\n";
                        intento--; // Repite el intento actual
                        continue; // Salta el resto del bucle y va a la siguiente iteración
                    }

                    if (opcion == 's' || opcion == 'S') {
                        cout << "Ya no hay marcha atrás...\n";
                        quiere_visitar_zona_peligrosa = true;
                        break; // Sale del bucle for
                    } else if (opcion == 'n' || opcion == 'N') {
                        cout << "Que no lo visites, no te aleja de lo inesperado... (Intento " << intento << " de 3)\n";
                        if (intento == 3) {
                             quiere_visitar_zona_peligrosa = false; // explícito
                        }
                    } else {
                        cout << "Opción inválida. Usá 's' o 'n'.\n";
                        // cin.clear() e ignore() ya se hicieron arriba si cin.fail()
                        intento--; // Para repetir el intento actual
                    }

                    if (intento == 3 && (opcion == 'n' || opcion == 'N')) { // Si agotó intentos diciendo 'n'
                        cout << "Agotaste tus oportunidades. La zona peligrosa sigue siendo un misterio...\n";
                        break; // Sale del for
                    }
                }

                // Continuación si el jugador decidió visitar o si el bucle for terminó
                if (!quiere_visitar_zona_peligrosa) {
                     cout << "Decides no arriesgarte por ahora. Volviendo al menú principal...\n";
                     break; // Sale del case 3
                }

                cout << R"PLANETA(
                                             
                                                                                                                                
                                                                                                                                
                                                          .';:ccclllllllc:;,'.
                                                    .;coxOOOOOOOOOOOOkkkxxxxxkkxoc;.
                                                .:lxxxdddxkOOOkdoodddddxxxxxdolox0000xl,.
                                            .;okxxkkkxxdodooxolc::::;;:cclddlc:clkOOOOkO0kc.
                                          ,okkkkxkkkxdxddoooollllc:;,,;ccc::;;;;;:odkOkddxO0x:.
                                       .lxdxkkxooodxxkxdollc:;;;;;;:cllllc::::::ccclxkkxolldkkko,
                                     .dOxdxxdoclldxdxdddddddddlc:;;:cccllc::::ldddddxxdolodxooddxx;
                                   .lOOkdkkxl:odxxolclodxxolodxo:,'':looddol:cooxxxdddooooodddooooxk'
                                  ;OOkkxooooxxdl:,,,;olccloo:,'c;;cloollodl,..,:oddddolclodddlllccldOl
                                .d00Okoc:,,;:cc;;,,,cooddodxo;;coddooodoc:;'...';;;;;::clloooollc:cclxk'
                               .O0OOxxxd:,,,'',',;:cooddl:loddooddxxxxxdcccc:,.,'..,,;:;,,,,;cccc:clclxO:
                              'OOOOkkkkko;,''''':lldoollllodddolldxxxxo::;:cc'...........'',;loool:lllldkc
                             ,kkOOOOOkkkxl,','',:lddooooooodl:,;oxdddddddllll:,,... ..',,.'',;loddl:loolxkl
                            .OOOkkxkkkOkxxl:;::cddddoolodo:clc;;lolloooddlllodl;.     ';,''',,,;:lddoll:oxk;
                            kOOOkkxkkOOxxkdodddooddolccl:'...,...:oocclc;'.',;;;c:'    ....,''',,,;lc:::cdkk.
                           ckxkxkOkkxxkkkxdddxxxodoo:;''........'':oc,,''',,,.. .'c;. .;;,,;c,';,,,,,;clllkOo
                          .OxoclxOxddool:,:odxddlloc;,''....'...'coddoc;'''.. .....;c..:oc:;,..';:;,,,lxkddOK'
                          :xlcc:lxxxxo;,,''coooc;lc:cl:;,''...  ,loddoc;.....','.'..,;.'::,.....,;,,,,;okkxxKd
                          ddlc::codxl;;;,':oddxdddool:;,,;...  .:cclc;:............'',..''.... ..,',,;;coxdok0.
                          kolc:::ldl,cdd;.',';;cooodxxxdl:;,.  ;c::c::;.:'.. ....'',,;;'',''..,:,,,,,;:odclox0'
                         .Oolc::ccl;;dkd;......':ccclodddolc...:c;;;cc:::,,...  .....'. .':o;.::;,,,;cooclcodO;
                         .Oocc::::l;cxxdc....;:;;,'';:ccool;.....'.:'';lcccc'     ..,'...;ldl.;c;,,,:;,;:oddx0;
                         .Oxlc::;;::oxxo:::cllooolc,...';;,...  ...'. .'';loc,...',,;c..,,;cd:':;,;:l,,,:llok0'
                          xOxc:;,,,,;:colooddoooooooocodddlc:;'..   ....''''...'clc;,,,''';:lo:clooo;,,,:llokO.
                          cK0xc:;,,,,;,;clddooddooolloxxxdddllo:'...... .  . .;c;'......'',c:lllllol;,,;ccldOx
                          .K0ko:;,,,,,c:',lolllddddddoodo::cclc,..',;;,....'... ......''.'c;.,;;:ccc;,;;c:coO;
                           oKOd:;,,,,;;c:;lddxddoc;:c:,,;;::llc:;......,. .........',;,,;;...',;;;;;;lc:lcldx
                           .KOoc::,,,,,;cooxkxool:;''...';:c:c,...     .... ......'',;:c:..  .,;::,,,:cc:ccox.
                            ,Odooo:;,,,,ldxd:,:c;;,....,,,;col,..         ......'',:c:;'   .,:odl,,;;;::lok:
                             ;kkkxol:;,:odocc:,'.',...'','.'',;,.....      .   ..',;;.,. ..';cxlc;:::clclxo
                              ;O0kddoc;,:odo:;;'';,'',;,'.............       . ......'c'.,,,,:oolll::lcldl
                               ;00kddlc:odxoc:;:cll:;:;........ ..... .'''... .......;:'''',,:oo:;:cdxoxc
                                .xOOOxool:ldoocol:::;''''..','..;:;'';c:'.... .....'ll:;,,;::lcccccoxxx;
                                  lOxdxkdl;coc;:cool:,;:cc:ccloool:'.,ldo:.  ...,;;codl;:lododdolcldko.
                                   .x0xddxdlol:;:dxkdcc::cc;:loooool'..;lol'',';;:lddoldxdooddddodxx,
                                     ,k0xlllclolloddxxdoll:;;::::;;;:c:c:;:l:;;::ldoccolllodxxdddx;
                                       ,kkooddddddxxxxxxl;;;;;;;;;;cclcodc:ll,,:clc;,;:looddooxx;
                                         .cxxddddxkxxkxddc;;:;;::::odxxkkxdcl;;:c:;;;:lodxxddl,
                                            ,lxkxdddxxxdolcc;;;;;::clodxxxocoddoc;:coldxkkl;.
                                               .:okkxxxxxxolccccc::;;::cllodxdlcllodxko:'
                                                   .,codxxxxxxxddooodddxxdoooodxxdl;.
                                                         ..,;clooddxxxddolc:;'..                )PLANETA";

                cout << "\nLlegamos al Planeta Circia...\n";
                cout << "En este planeta, no todo lo que ves es real.\n";
                cout << "Todo puede cambiar de forma, sus habitantes son los reyes de la metamorfosis.\n";
                cout << "Nos recibe una hermosa mujer... si quieres conocerla, presiona (s/n): ";
                cin >> letra; // Leemos la respuesta del usuario para la mujer.

                if (cin.fail()) { // Manejo de error si no se ingresa un char
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida. Se asume que no quieres conocerla.\n";
                }

                if (letra == 's' || letra == 'S') { // Si el usuario quiere conocer a la mujer
                    cout << endl;

                    cout << R"MUJER(
╔═════════════╗
║   ¡HOLA!    ║
╚═════════════╝
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW'   codMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNk:.  ..,NMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMX0MMNOl,.     ,WMNKMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMM0c. ;:.         lWMMMMMMMXNMMMMMMMMM
MMMMMMWMMMMMMMMNd.              ;XMMMMMMMMMW;lNMMMMMMM
MMMMMM:0MMMMMX:               :KMMMMMMMMMMMMN .OMMMMMM
MMMMMO :MMMNc              .lXMMMMMMMMMMMMMMMk  dMMMMM
MMMMM;  OMO.             .kMMMMMMMMMMMMMMMMMMM.  kMMMM
MMMMW    :             .OMMMMMMMMMMMMMMMMMMMMM,   NMMM
MMMM0                .xMMMMMMMMMMMMMMMMMMMMMMM.   dMMM
MMMMk                'cx0WMMMMMMMMMMMMMMMMMMMO    :MMM
MMMMx                     .:xNMMMMMMMMNko:,..     :MMM
MMMMd                .;;.     ,0MMMMWd:cloxxxkx.  ;MMM
MMMMd              d;clWMK,    kMMMMMKc. ,...;c   :MMM
MMMMl               :0MMMMW.   WMMMMMMONNMX;.     lMMM
MMMMc            0MMMMMMMMM.  :MMMMMMMMMMMMMMWOc  dMMM
MMMM:            ;MMMMMMMM0   OMMMMMMMMMMMMMMMMX  kMMM
MMMM;             KMMMMMMK. '0MMMMMMMMMMMMMMMMM,  0MMM
MMMM,             'MMMMWo   ;NMMMMMMMMMMMMMMMMd   XMMM
MMMM'              dNOc.     ;MM0NMMMMMMMMMMMX    WMMM
MMMM.                     ;KMMMMMMMMMMMMMMMMW'   .MMMM
MMMM.                     ..,ldoox0WMMMMMMMMl    .MMMM
MMMM.                    ;x00xdxxkdoNMMMMMMO     'MMMM
MMMM.                        .':xXMMMMMMMMO      'MMMM
MMMW                       OKNWMMMMMMMMMNc       ;MMMM
MMMW               .       xMMMMMMMMMWk:         lMMMM
MMMN             :KMN0xc,...kMMMMMMMNc           dMMMM
MMMK           cXMMMMMMMMMMMNMMMMMMMMMWx,        kMMMM
MMM0         .KMMMMMMMMMMMMMMMMMMMMMMMMMM0.      0MMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW'   codMMMMMMMMMMMMM


)MUJER";
                        cout << "\nLa mujer te sonríe enigmáticamente.\n";
                } 
                
                cout << "¿Realmente crees en lo que estás viendo? (s/n): ";   
                  cin >> letra; 

            if (letra == 's' || letra == 'S') {
                
                    if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida. Se asume que no quieres visitar.\n";
                }

  cout << R"SER(


KKKKKXXXXNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKKKKKKKKKKKKKKK
KKKKKKkc;;clKXNNXXXXXXXXXXXXXXXX0d0XXXXXXXXXXKKKKKKKKKKK
XXXXXXX0dlo: .cXNNNXNNNNO' .0NNNK  xNNNNNNXNNXXXXKKKKKKK
XXXXNNNNNNNNx. .lONNNNNNl  .0NNNN; .NNNNd'...;KXXXKKKKKK
0XNNNNXkdkNWWX'   'XNWNNN: XNWWNNd ,NNWo      lXXXKKKKKK
KlNNNK. ...OWWNl  .WWWWNX .XXloXNk oNWWl     ;KNNXXXXXKK
XOcNNc  .  oWWNN. .llc:c, ;NK:,ONl 0NWNWKkOKNNNNNNXXXXXX
NNk.K0    .KWWNXllok0OxoclNNNNNNN;:NK' cWNNNNXOkk0K00OOX
NN; lWKc:oNNWWNNNNWWWNNNNNNNNNNNX.XNK,.dNN0;. .:;;:lloOX
NN' ,NNNNNNNNKxlk0xx0NNNNNXXNNNNl0NNNNNXo..;dKWNNNNNXXXX
NNNO:kNNNNNNN. '''',,:oNNNNNNNXo0No.0Nk ,OWWXxc;:dXNNXXX
XXNN0 'XNNNNK x0,:.:cXXNNNNNKXOXNN0dNk 'NWX:  .    0NXXX
XXNNX  cNNNNxoWo 'c  KNNNNd   .kNNNNNo.XWX'     .  lNNXX
XXNNNx..0NNNNNWXdW,  NNWWo .;,c'0NNNXd0NNO.        ONNXX
KXXNNNNx .:oNWWWNN  ,NWWWKokkxNNxNNXXNNNNNl      .ONNNXX
KXXNNNNNo  'NNNNNx  oNNWNN0   ONNNNNNNNNNNN0ololkNNNNXXX
KXXNNNNN;  xNNNNN; 'NNNNNNx  'XNNNNNNNNNNNNNNNNNNNNNXXXX
XXXNNNN0  .NNNNNNKkKNNNNNNXXXXNNNNXcc,..:oONNONKNNNNXXXX
XXXNNNNc  :WWWNNNNNNNNNNNNXXXNNNNNc     .;. ;'d:KNKXXXXX
XXXNNNN.  kWWWWWNNNNNNNNNNXXXNNNNN. cNNWNNNN0c...l;KNXXX
XXXNNNN.  XW0'''lkxKNNNNNNXXXNNNNk  XNWNNNNNNNXo'..XNNXX
XXXNNNN'  WK.        ,oxKNNXNNNNN. cNNNNNNXNNNNNK:.NNXXX
XXXNNNN. .WK;lc;;;:cc:;;xNNNNNNNl  KNNNNXXXXXNXXXKoNXXXX
XXXNNNK   0WWWNNNNNNNNNNNNNNNNNd  oNNNNNXXXXXXXXXXXXXXXX
XXXNNNX'  XNNNNNNNNNNNNNNNNNNNc ;KNNNNNXXXXXXXXXXXXXXXXX
XXXNNNNNKKNXXXXXXXXXXXXXXNNNk.,ONNNNNNXXXXXXXXXXXXXXXXXX
XXXXNNNNNXXXXXXXXXXXXXXXNNO;;0NNNNNXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXO:oXNNNNXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXKXXXXNNXXXXXXXXXXXXXXXXXXXXXXXXX


            )SER";

            } 
                
                // Aquí va la lógica de "Lo único que puede hacer es cargar combustible"
                // Esto se ejecuta independientemente de si conoció a la mujer o no.
                cout << "Lo único que puede hacer es cargar combustible. Ingresa un número\n";
                cout << "Ingresa un número de 1 al 10 creditos:  ";
                int combustible; // Declaramos combustible aquí
                cin >> combustible;

               if (cin.fail()) { // Manejo de error si no se ingresa un número
                    cin.clear();
                    cin.ignore(10000, '\n');
                   // cout << "Entrada inválida para combustible. No puedes continuar.\n";
                } 
                    // Decisión sobre el combustible
                    if (combustible >= 6) {
                        cout << "\nTenés suficiente combustible. ¡Podés continuar tu viaje interplanetario!\n\n\n";
                    } else {
                        cout << "\nNo podés continuar. Necesitás al menos 6 unidades de combustible.\n\n\n";
                    }
                  // Pausa antes de limpiar y volver al menú principal
                cout << "Presiona ENTER para volver al menú principal...";
                cin.ignore(10000, '\n'); // Consume cualquier '\n' pendiente en el buffer
                cin.get();                // Espera que el usuario presione ENTER
                      // system("clear");
                // Aquí termina la lógica del planeta Circia
                break; // Sale del switch (planeta) case 3
            } // Fin del case 3: Planeta Circia

            case 4: { // Inicio del case 4: Planeta Trantor
                cout << R"BIENVENIDA(
 *********************************************************************************[]*
 *[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]*[]*
 *[]******************************************************************************[]*
 *[]* |      _|   _|    _|   _|_|_|_|   _|     _|     _|_|              *[]*
 *[]* |_|    _|   _|    _|   _|         _|     _|   _|    _|            *[]*
 *[]* |  _|  _|   _|    _|   _|_|_|     _|     _|   _|    _|            *[]*
 *[]* |    _|_|   _|    _|   _|           _| _|     _|    _|            *[]*
 *[]* |      _|     _|_|     _|_|_|_|       _|        _|_|              *[]*
 *[]* *[]*
 *[]* _|_|_|_|_|    _|_|_|    _|_|    _|     _|  _|_|_|_|_|   _|_|      _|_|_|  *[]*
 *[]* _|        _|    _|  _|    _|  _|_|   _|    _|       _|    _|  _|    _|  *[]*
 *[]* _|        _|_|_|    _| _| _|  _| _|  _|    _|       _|    _|  _|_|_|    *[]*
 *[]* _|        _|    _|  _|    _|  _|   _|_|    _|       _|    _|  _|    _|  *[]*
 *[]* _|        _|    _|  _|    _|  _|     _|    _|         _|_|    _|    _|  *[]*
 *[]                                                                             *[]*
 *[]******************************************************************************[]*
 *[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]*
 ************************************************************************************
)BIENVENIDA";

                cout << "\n===¡Bienvenidos a Nuevo Trantor- SPA GALÁCTICO STEAMPUNK === \n" << endl;
                cout << "¡El planeta artificial creado para sus vacaciones!" << endl;
                cout << "¡El lugar donde la tecnología y la naturaleza se encuentran!" << endl;

                cout << R"PLANETA( 
                                                  " ___====-_ * _-====__
                                            "_--^^#####[]               []#####^^
                                        "-^##########[]  (SPA GALÁCTICO)  []##########^- 
                                       "############[]      RELAX ZONE     []############ 
                                    "-#############[]_______________________[]############# 
                                 "-###############[]   [__]   |  |   [__]    []############### 
                              "-#################[]           |__|            []################ 
                             "-#####################--[]_____STEAM-DOME_____[]--################# 
                             ====================================================================
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                          ===========================================================================
                         @@@@@|#|--------  |#|--  OBSERVATORIO CELESTIAL  --|#|----|#|-------|#|@@@@@@
                        @@@@@@|#|  ()      |#|  __             __          -|#| () |#|  ()   |#|@@@@@@@
                       @@@@@@@|#|          |#| [()] GRAVEDAD  [()]         -|#|    |#|  ()   |#|@@@@@@@@
                      @@@@@@@@|     [##]   ( )   #####################      ( ) ###  |@@@@@@@@@@@@@@@@@@@ 
                     @@@@ [####]_________ (88888888888===NUEVO TRANTOR===8888888888888)________[####]@@@@@
                     *****[#######]       (######|  SPA & WELLNESS  |######)******************************
                     * |#######|      0__|__________________|___0    GARDENS 00          |##########|    *
                     * |#######|         |__________________|   🌿🌿🌿  🌿🌿🌿        |############|    *
                     * |#######|         |   __  ____  __   |___🌿🌿🌿  🌿🌿🌿  _  _  |############|    *
                     * |#######|         |  |==||____||==|  |       HOT SPRINGS          |#########|    *
                      * |#######|         |  |__||____||__|  |   🌫️        🌿            |#######|   *
                       * (#######)            CENTER DE REENERGIZACIÓN MECÁNICA            (#######)  *
                        * (#######)___  _#⚙️====[||||||||||]====⚙️#  --_____#############  (#######) *
                         *(·········································································)*
                          *(·······································································)*
                           *(·····································································)*
                            *(|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||)*
                             *(|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||)*
                               *()  _________________________|                      |       ))))*
                               *|   ZONA NAVES VISITANTES    |*[INGRESO]* RECEPCION | *EXIT* ))*
                                *(___________________________________________________________)*
                                  **|_____||_____||_____________||_____________||_____||____|**
                                  **|_____||_____||______|______||______|______||_____||____|**
                                  **|_____||_____||______|______||______|______||_____||____|**
                                  ** (__)   (__)    (__)  (__)    (__)   (__)    (__)  (__)**
                                  ** (__)   (__)    (__)  (__)    (__)   (__)    (__)  (__)**
)PLANETA";
                cout << "¡Por favor, aterrice su nave en el lugar reservado a los visitantes!" << endl;
                cout << "¡Todos los pasajeros deben descender e identificarse antes de ingresar al NUEVO TRANTOR" << endl;

                cout << "Estimad@ visitante, Ingrese su nombre:             ";
                string nombre_visitante; // Renombrado para evitar colisión con `nombre` si fuera global
                // cin >> nombre_visitante; // Esto solo lee hasta el primer espacio
                getline(cin >> ws, nombre_visitante); // Lee toda la línea, ws consume el newline anterior


                cout << "Ingrese su edad: ";
                int edad_visitante = 0; // Renombrado
                cin >> edad_visitante;
                 if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida para la edad. Acceso denegado.\n";
                    break; // Sale del case 4
                }

                if (edad_visitante < 10){
                    cout << "Lo sentimos, no puede acceder a nuestros servicios por restricción de edad." << endl;
                    break; // Sale del case 4
                }

                cout << "Felicitaciones, " << nombre_visitante << ", usted ha sido autorizad@ a ingresar a NUEVO TRANTOR.\n"; // Personalizado
                cout << "Nuestros servicios de descanso y restablecimiento de su salud están a su disposición" << endl;
                
                int plan_spa; // Renombrado

                // Este es el bucle do-while que tenía el problema principal
                do {
                    cout << "Ingrese el plan que desea conocer (1 / 2): ";
                    cin >> plan_spa;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Entrada no válida. Por favor, ingrese opcion 1 o 2." << endl;
                        plan_spa = 0; // Forzar a que el bucle continúe si la entrada fue mala
                    } else if (plan_spa != 1 && plan_spa != 2){
                        cout << "Entrada no válida. Por favor, ingrese opcion 1 o 2." << endl;
                    } else {
                        // El plan es 1 o 2, salimos del bucle de selección de plan
                        // La condición del while se encargará de esto.
                    }
                } while (plan_spa != 1 && plan_spa != 2); // Condición para repetir si el plan no es 1 ni 2

                

                cout << "El plan seleccionado es el " << plan_spa << endl;

                cout << "*****Los costos del plan seran bonificados, si usted responde correctamente el cuestionario asignado*****\n";
                cout << " #####################     PRESTE ATENCIÓN AL RESPONDER: escriba en minusculas y sin espacios!!!      ######################\n";
                cout << "********************Si no puede contestar las preguntas, deberá volver a su planeta.***********************" << endl;

                // Pregunta 1
                cout << "Pregunta 1: ¿Cómo se llama este planeta? Pista: son dos palabras, escríbalas en minusculas y sin espacios!!! \n";
                string respuesta1;
                cin >> respuesta1;
                if (respuesta1 != "nuevotrantor"){ // Corregido: si es diferente, entonces incorrecto
                    cout << "Respuesta incorrecta. Deberá volver a su planeta.\n";
                    break; // Sale del case 4
                }
                // Si llega aquí, la respuesta 1 fue correcta

                // Pregunta 2
                cout << "Pregunta 2: ¿Cuántas semanas tiene el plan más largo? ";
                int respuesta2;
                cin >> respuesta2;
                 if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Entrada inválida. No puede acceder al plan.\n";
                    break; // Sale del case 4
                }
                if (respuesta2 != 2){ // Asumiendo que 2 es la respuesta correcta
                    cout << "Respuesta incorrecta. No puede acceder al plan." << endl;
                    break; // Sale del case 4
                }

                cout << "¡Felicitaciones! Ha respondido correctamente las preguntas." << endl;

                string decision;
                cout << "¿Continúa o desea volver a su nave? Presione 1 para continuar. Presione 2 para volver: ";
                cin >> decision;
                if (decision == "1"){
                    cout << "¡Gracias por continuar con su plan de Spa! Disfrute su estadía en Nuevo Trantor." << endl;
                } else if (decision == "2") {
                    cout << "Volviendo a su nave. ¡Esperamos verle pronto!\n";
                } else {
                    cout << "Opción no válida. Volviendo al menú principal.\n";
                }
                
                 system("clear");

                break; // Sale del switch (planeta) case 4
            } // Fin del case 4: Planeta Trantor

            case 5: // Inicio del case 5: Salir
                cout << "\n¡Buen viaje, comandante!\n";
                return 0; // Termina el programa aquí
            
            default: // Opción por defecto para entradas no válidas en el menú principal
                cout << "Opción inválida. Intenta de nuevo.\n";
                // No se necesita break aquí, el bucle while(true) continuará.
        } // Fin del switch (planeta)
    } // Fin del bucle while (true)

    // No hay código aquí después del while, ya que 'return 0;' dentro del case 5
    // es la forma en que el programa finaliza.

} // Fin de la función main
