#include <iostream>
#include <string>

using namespace std;

int main() {
int planeta;
char letra;
while (true) {
cout << "\n====== CONSOLA DE NAVEGACIÓN INTERGALÁCTICA ======\n";
cout << "1. Estación espacial Rocco Molopolk (switch)\n";
cout << "2. Planeta TOXICO\n";
cout << "3. Planeta Circia\n";
cout << "4. Planeta por definir (for)\n";
cout << "5. Salir\n";
cout << "Selecciona un planeta (1-5): ";
cin >> planeta;

switch (planeta) {
case 1: {
int i;
cout << "\nBienvenido a la Estación Espacial de Rocco Molopolk!\n";
cout << "1. COMPRAR NAVES\n2. Show de Señoritas Espaciales\n3. Tomar Flacknar\n";
cin >> i;

switch (i) {
case 1: {
cout << "\nHas decidido COMPRAR NAVES.\n";
int ia;
cout << "\nSelecciona tipo de recarga:\n1. Baja\n2. Intermedia\n3. Alta\n";
cin >> ia;

switch (ia) {
case 1: {
cout << "\nHas elegido la nave TERRASAURUX REX.\n";
int y;
cout << "\nAhora puedes:\n1. Ver show\n2. Tomar Flacknar\n";
cin >> y;

switch (y) {
case 1: {
int b;
cout << "\nConoces a una señorita del show.\n1. Dialogar\n2. Alejarte\n";


cout << R"SALE(
OOOOOOkkkkkkO00000OOOOOOkkkkkxxxxxxxxxkOOOOOOkxooollodddddoololllcccc::::::::,,,,,''..... .
OOOkkkkkkkkkkkkxxxk00OOOOOOkkkkkkkkkOOkkxddoolooooooollllccclllcccccc:::;;;;,,,,''....... .
OOOOkkkkkxkkkOOOOOOOOkkkxkkxxxxkxxxxxddxdoolooollooollccc:ccccccccc::::;;;,,,,'''''..... .
0OOOOOkxkxxxkkO000OOddxkkkdkkOkkkoxxxddooodooodolllclccllcccllcccc::::;;;;,,,'''........ ,
kkkkkk0OxkOkkkOOOxkkkkOOkk0clooolloolllooolclolccoodolllcllllllllccc::::;;,,,,,......... ';
kxxxxxkOO0OkdxkO00Okk0OkOOOlooooooooooxxdddlllllllodllloollllll::;;;;;'''''''........... .;;
OkxxxxxxO00OOOOOOOOxkxxxkkkkkkxxxxdoollloodddddddddoololc::c::;,;,,,,,,,,,,,,,''....... .;;;
00OkkxxxxxkkkkOOkkdoodooddxxxxxxxxddxdddddddooollcccllcccccc::::::::::;;;;,,''......... .;;;;
OOOOOOkkkkxxxxkkkkxxxxxxxxxxxxxxdddddddooooolllllccclllllccccc:::::;;;;;,,,,''''............ ....................';;;;;
:xOOOOOkkkkkkkkkkxxxxxxxddxxxxddddddddooooooooolllcllcc:ccc:::::;;;;;,,,,''''..'cxO0KKXKOo,......................,;;;;;;
;;cxkkkkkkxxxxxxxxxxxddddddddoodooooooooolllllc;cdk00KXX0Oo:::;;;;;;,,,,,''''.''lxO0KXXXXKK;...................,;;;;;;;;
;;;;cdxxxxxddddddddddoloddxxxxdoooooollllllllc.,okO0KKXXXXXx;;;;;;;;,,,,,,'''..,cood0Okxkxk,...........'''''',;;;;;;;;;;
:;;:::clodddddoooooo:.:xO0KXXNXKdcllllllccccl..cllO0kxkkOOOl;;;;;;;;,,,,,,,,,'. ',:0d'.,,l''''''''''''',,,;:::;;:::::::
KX0x:,'ckO0KXXXOlloo'':ldO0KK0KKO:ccccccccccc' .'.kd...',xl;;;;;;;;;;;,,,,,,,,,'..,:OK0d::,,,,,,,,,,,,,;;;::::::::::::::
KKKKo..;okk0KKKOxcll. .:llOkc;;.cccccccccccccc;,.,kKOll;c;::;;;;;;;;;;;;;;;;;;;;;,.'ccl,;;;;;;;;;;;;;;::::::::::::::::::
:,,c::. .,:x0c'';:cc:'..':kOl;:occcccc::::::::::;':c:o,::::::::;;;;;;;;;;;;;;;;;;;;..xd;:;;;;:::::::::::::::::::::::::::
klc::c:,'':d0Occ::::ccc;.'xxoc:ccc::::::::::::::c;.;kd:::::::::::::::::::::::;;;,,..dokkdc:ll:::::::::::::::::::::::::::
l::::::cc..,oc:::::::cccc..cd:cccc::::::::::::,'..c:xkl;odc:::::::::::::::::;.l,::lOkkKKkkxdkO::::::::::::::::::::::::::
oOdlcl::;.;xx:::::::cc:;,.lokoc:lc::::::ccll,'..,xxx0xdxolkd,';clol;'',,;;::c'..ldd0odx0KOc..okl:::c:::::::::::clodkkl..
OKk:cxccdoOxO0doxccc'c,,cdkk0OllokOcccodxxxx:..;:O:lkOk: 'cdo:.';lol:'.....',..oKXk;dWMWMo...,ld:.';:lodddoodxkxxxdlc;.
kK0o'.;lkk0OOOk;dl,;...:dOddxO0l.';xko:clddo...dkx,KWWWXk.....;oo;,.'''';;,,,'...:oKNWWWWX:odxxl;;odxddxxdddoooddxdooodx
WWo:...kNNOdKWN'lxodo'.kKk,oNMMkcllc:colc;'...';;ckNWWWWO:lccll::clxdc;,,,,'.....':coONWWO:olooddoc:,lxkxxxxxxxxkkkkkkkk
WNcl...;lXWWWk;''loxx,..;xKWWWWodolc:,.,,cooloodl::lkXWWWoolooollooc::cl:;clloddol,;;:cokkxlkKXXK00Okdc;clddxxxddddddddd
Od,.,:c;:oOXWdlol;cldl..,:lxKNW0;';cloddooolcllcl:.;;:ldxxxxKXNWNXKK0Okxoc;;:::;'.',cok:00XXNWWWWWWWWWWWN0ko:kxdoooooooo
;ccll:;',:odkkdxO0Oxllc::.',;codkOKNWNNNNXK0x::,'''cldoOKxNNWWWWWWWWWWWWNNXc;:;:odxXNXWkXWXNWWWWWNWWWWWWWNN0lcd;cl:ooooo
c;clokkO0KXKWNNNNWWWKd:,;clOdk00XWWWWWWWWKxl;:;lod0XKNOXWKNWWWWWWWWWWWWKKx',:cl0WXKWWNWWWWWWWWNWWNXK0kOxlloooooooododdooodx
k0OKWNNWXWWNWWWWWKxc;:ok0XWXNNKWNWWWWkoc;;::ckKkKWKWWNXWWWNWWWWWWWWWKKx',:cl0WXKWWNWWWWWWWWNWWNXK0kOxlloooooooododdooodx
kkXWWWWWWWWWWOxo;;ldxXNX0WWWWWNWWWWWW0cl;olONNKNWKXWWNWWWWWWWWX0OoddloooocccldcldOldOxllddoc:,cloodoooolcloooddddddooloo
,dk,:l;lcolll.',:xxkNXNONWWWNWWNKKOxxkddclloloxddl;lc:ccc;,;;,llollllllllllllllloo'.... ..,cdolxddddddddoddooddoollolloo
;kolcc'.....'lxkcxdooollc.'......':;odooddddddoodd.... ..:dOxcddddddddodddddddddddd......;xO0lxddooooooddoddddxxxxxxxxxd
'kxO000,....lOOdOOOOOOOkO......,dO0dOOkxxxxkkxxdkkk'....:kO0oOkxdooodxddddddddoooodd.....ckkldlooddooooddddoooodooo:cddd
;OxO0000o...dkd00000O0000l.....ck0dO000000000000OxO0;...,x0o00OkkxxxxxxxxxxxkxxddxkOx....xOoxxxdddxxxxxxdxxxxxxkkkdloldx
cOx000000O..cxdO0000000000,....lOdx000000000000000000'..lkOlOkoc::c;;:ccclccccxOOO000Oc..:Odd0OOOk0OkxddxddooxxdxkOO000x
cx0000000l';kkcOx000000000O;...;kOd000000000000000000Ol.'xOokOOO0000000000000000000000x.'d0O.',:oxkkxk00OkOkOOOOkkkooool
.loOO0000o.l0d;,xxO000000000O,.:OKdk000000000000000000l.,OKl'cx0kO0000000000000000000o.:k0x000kdlccldxxdX0k000000Okkkxx
dc,;dxx000.kd00x,dkx0O0000000l.lO0,xxO000000000000000:.lO0dxc';xkO0000000000000000000.lOkk000000000kdxl:cok00OO0000000
OOOOOO000k.Od0000:cdKx0000000O.o0do,okkkOO000000000000d.d0d0000x;:kkkkOO000000000000000.xOd0000000000000000kxkkkO0000000
...'''',,'.kx00000x:.0Kk00000K'dd000c,doKk000000000000k.kdO000000k:lxdXk00000000000000o,Od000000000000000000000000000000
kkkxxxddolccccccccllc,lxk00000.xx0000Oc::x0O0000000000l:Ox000000000000c.dXXx0000000000x.;KKk000000000000OOOkOOOO00000000

)SALE";

cin >> b;

if (b == 1) {
cout << "\nTuvieron una noche loca. Te han robado todo. PERDISTE.\n";
} else if (b == 2) {
cout << "\nDecidiste alejarte.\n";
} else {
cout << "Opción no válida.\n";
}
break;
}
case 2:
cout << "\nBebiste Flacknar. Te robaron todo.\n";
break;
default:
cout << "Opción no válida.\n";
}
break;
}
case 2:
cout << "\nCompraste la nave CUBICCAX-4000.\n";
break;
case 3:
cout << "\nTe estafaron con la nave. Reza, Malena, reza.\n";
break;
default:
cout << "Opción no válida.\n";
}
break;
}
case 2:
cout << "\nEl show fue impresionante.\n";
break;
case 3:
cout << "\nTomaste Flacknar. Te dormiste y te robaron.\n";
break;
default:
cout << "Opción no válida.\n";
}
break;
}

case 2:{
int eleccion, edad;

cout << "Has llegado al planeta TOXICO." <<endl;
cout << "Un planeta desértico donde solo hay tierra, plantas secas y edificios abandonados." <<endl;
cout << "Los rayos del sol son muy fuertes y queman." <<endl;
cout << "El sol está por salir... tienes que buscar un refugio." <<endl;
cout << "Los lugares están a 20 km, tienes la suerte de tener dos vehículos cerca… elije uno:"<<endl;
cout << "1) MOTO"<<endl;
cout << "2) BICI"<<endl;
cout << "Elije: ";
cin >> eleccion;

if (eleccion == 1) {
cout << "Para conducir la Moto tienes que ser mayor de edad..."<<endl;
cout << "Ingrese su edad: ";
cin >> edad;

if (edad >= 18) {
cout << "Usted es mayor de edad." <<endl;
cout << "¡Felicidades, eres mayor de edad, aquí te dejo la llave!"<<endl;
} else {
cout << "¡Qué pena! Los lugares están muy lejos, te vas a morir..." <<endl;
cout << "¡Pero puedes intentarlo y pedalear muy rápido!"<<endl;
}

} else {
cout << "¡Qué pena! Los lugares están muy lejos, te vas a morir..."<<endl;
cout << "¡Pero puedes intentarlo y pedalear muy rápido!" <<endl;
}

cout << "¡Rápido! El sol ya está saliendo. Elije un refugio:"<< endl;
cout << "1) Un túnel secreto" <<endl;
cout << "2) Una casa pasando la colina" <<endl;

cout << "Elije: ";
cin >> eleccion;

if (eleccion == 1) {
cout << "Estás en el túnel secreto. Es un túnel peligroso y tienes que pasar por 3 tramos..." <<endl;
cout << "Tramo 1: ves ratas hambrientas." <<endl;
cout << "Tramo 2: el túnel se vuelve muy oscuro y escuchas ruidos." <<endl;
cout << "Tramo 3: sentís algo respirando en tu nuca."<<endl;
cout << "¿Qué haces?" <<endl;
cout << "1) Sigues caminando por el túnel" <<endl;
cout << "2) Sales corriendo hacia afuera" <<endl;
cout << "Elije: ";
cin >> eleccion;

if (eleccion == 1) {
cout << "¡Felicidades! Atravesaste los 3 tramos y llegaste a la fábrica abandonada."<<endl;
cout << "Te recomiendo cerrar la puerta del túnel así no entra la rata gigante."<<endl;
cout << "Fin de la aventura. Volviendo al menú principal..."<<endl;
} else {
cout << "¡Has escapado del túnel y el sol está en su punto más alto!"<<endl;
cout << "Perdiste, te moriste.";
cout << "Volviendo al menú principal..." <<endl;
}

}
break;
}

case 3: {
//Consulto al usuario si está seguro de visitar el planeta

for (int intento = 1; intento <= 3; intento++) {
cout << "Has elejido un planeta dondo visitarás zonas que pueden no gustarte... (s/n): " <<endl;
char opcion;
cin >> opcion;

if (opcion == 's' || opcion == 'S') { //
cout << "Ya no hay marcha atrás...\n" <<endl;

break;

} else if (opcion == 'n' || opcion == 'N'){
//Si decide no visitarlo vuelve al menú pricipal

cout << "Que no lo visites, no te aleja de lo inesperado... (Intento " << intento << " de 3)\n" <<endl;
} else {
cout << "Opción inválida. Usá 's' o 'n'.\n";
intento--; // no cuenta el intento si fue inválido
}

if (intento == 3) {
cout << "Agotaste tus oportunidades. La zona peligrosa sigue siendo un misterio...\n";
system("clear");
break;
} 

}

//Cominzo del planeta Circia 
cout << "Estamos llegando al planeta Circia...\n";
cout << "Es un planeta donde hay que pensar mucho lo que dices.\n";
int vista_planeta;
cout << "Si quieres visitar el planeta presiona 1: ";
cin >> vista_planeta;

//Comienzo de la visita al planeta

if (vista_planeta == 1) 
{
cout << R"DELIMITER( 
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
.OOOkkxkkkOkxxl:;::cddddoolodo:clc;;lolloooddlllodl;. ';,''',,,;:lddoll:oxk;
kOOOkkxkkOOxxkdodddooddolccl:'...,...:oocclc;'.',;;;c:' ....,''',,,;lc:::cdkk.
ckxkxkOkkxxkkkxdddxxxodoo:;''........'':oc,,''',,,.. .'c;. .;;,,;c,';,,,,,;clllkOo
.OxoclxOxddool:,:odxddlloc;,''....'...'coddoc;'''.. .....;c..:oc:;,..';:;,,,lxkddOK'
:xlcc:lxxxxo;,,''coooc;lc:cl:;,''... ,loddoc;.....','.'..,;.'::,.....,;,,,,;okkxxKd
ddlc::codxl;;;,':oddxdddool:;,,;... .:cclc;:............'',..''.... ..,',,;;coxdok0.
kolc:::ldl,cdd;.',';;cooodxxxdl:;,. ;c::c::;.:'.. ....'',,;;'',''..,:,,,,,;:odclox0'
.Oolc::ccl;;dkd;......':ccclodddolc...:c;;;cc:::,,... .....'. .':o;.::;,,,;cooclcodO;
.Oocc::::l;cxxdc....;:;;,'';:ccool;.....'.:'';lcccc' ..,'...;ldl.;c;,,,:;,;:oddx0;
.Oxlc::;;::oxxo:::cllooolc,...';;,... ...'. .'';loc,...',,;c..,,;cd:':;,;:l,,,:llok0'
xOxc:;,,,,;:colooddoooooooocodddlc:;'.. ....''''...'clc;,,,''';:lo:clooo;,,,:llokO.
cK0xc:;,,,,;,;clddooddooolloxxxdddllo:'...... . . .;c;'......'',c:lllllol;,,;ccldOx
.K0ko:;,,,,,c:',lolllddddddoodo::cclc,..',;;,....'... ......''.'c;.,;;:ccc;,;;c:coO;
oKOd:;,,,,;;c:;lddxddoc;:c:,,;;::llc:;......,. .........',;,,;;...',;;;;;;lc:lcldx
.KOoc::,,,,,;cooxkxool:;''...';:c:c,... .... ......'',;:c:.. .,;::,,,:cc:ccox.
,Odooo:;,,,,ldxd:,:c;;,....,,,;col,.. ......'',:c:;' .,:odl,,;;;::lok:
;kkkxol:;,:odocc:,'.',...'','.'',;,..... . ..',;;.,. ..';cxlc;:::clclxo
;O0kddoc;,:odo:;;'';,'',;,'............. . ......'c'.,,,,:oolll::lcldl
;00kddlc:odxoc:;:cll:;:;........ ..... .'''... .......;:'''',,:oo:;:cdxoxc
.xOOOxool:ldoocol:::;''''..','..;:;'';c:'.... .....'ll:;,,;::lcccccoxxx;
lOxdxkdl;coc;:cool:,;:cc:ccloool:'.,ldo:. ...,;;codl;:lododdolcldko.
.x0xddxdlol:;:dxkdcc::cc;:loooool'..;lol'',';;:lddoldxdooddddodxx,
,k0xlllclolloddxxdoll:;;::::;;;:c:c:;:l:;;::ldoccolllodxxdddx;
,kkooddddddxxxxxxl;;;;;;;;;;cclcodc:ll,,:clc;,;:looddooxx;
.cxxddddxkxxkxddc;;:;;::::odxxkkxdcl;;:c:;;;:lodxxddl,
,lxkxdddxxxdolcc;;;;;::clodxxxocoddoc;:coldxkkl;.
.:okkxxxxxxolccccc::;;::cllodxdlcllodxko:'
.,codxxxxxxxddooodddxxdoooodxxdl;.
..,;clooddxxxddolc:;'.. )DELIMITER";

cout << "\nLlegamos al Planeta Circia... \v\rEn este planeta, no todo lo que ves es real.\v\rTodo puede cambiar de forma, sus habitantes son los reyes de la metamorfosis.\n";
// << endl;
cout << "\nNos recibe una hermosa mujer..."; //<< endl
// << endl;
cout << " si quieres conocerla. presiona (s/n)";
cin >> letra;
if (letra == 's' || letra == 'S') // Agrego la S mayúscula también
{
cout << R"(
╔═════════════╗
║ ¡HOLA! ║
╚═════════════╝)";
cout << endl;

cout << R"MUJER(
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW; .::;XMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXd' .KMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0o:. .Oxl,OMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMNkdWMMKx:. .XMMMMWMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMKl' lo, ;NMMMMMMMMMMNNMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMXo. .OMMMMMMMMMMMMMl:XMMMMMMMMMMM
MMMMMMMMW0MMMMMMMMMM0; .kMMMMMMMMMMMMMMMW, cWMMMMMMMMM
MMMMMMMMl.MMMMMMMMO' 'kWMMMMMMMMMMMMMMMMMX. .KMMMMMMMM
MMMMMMMK kMMMMMK' ;0MMMMMMMMMMMMMMMMMMMMMx kMMMMMMM
MMMMMMMc .WMMWc .oXMMMMMMMMMMMMMMMMMMMMMMMW. OMMMMMM
MMMMMMW :WK. .oWMMMMMMMMMMMMMMMMMMMMMMMMMM: KMMMMM
MMMMMMO ' .dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMo ,MMMMM
MMMMMMo oWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMc KMMMM
MMMMMM: .OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMW. xMMMM
MMMMMM, .,lxKWMMMMMMMMMMMMMMMMMMMMMWNXl oMMMM
MMMMMM, ;xNMMMMMMMMMMMMNkl;.. oMMMM
MMMMMM. .. 'dNMMMMMMMx'..',;:ccccc; cMMMM
MMMMMM. . ';KXk; lMMMMMMWKNKxlcclox0NMx lMMMM
MMMMMM. 'kxx00MMMMK. 0MMMMMMWKl . ll. . MMMM
MMMMMM. .cXMMMMMMx .MMMMMMMMMWkMMMMN:. xMMMM
MMMMMW xKKNMMMMMMMMM0 lMMMMMMMMMMMMMMMMMMW0o, OMMMM
MMMMMN cMMMMMMMMMMMMd KMMMMMMMMMMMMMMMMMMMMMMN. KMMMM
MMMMMX NMMMMMMMMMMW. 'MMMMMMMMMMMMMMMMMMMMMMMd NMMMM
MMMMMK cMMMMMMMMMW; .kWMMMMMMMMMMMMMMMMMMMMMMX .MMMMM
MMMMM0 0MMMMMMMK. xMMMMMMMMMMMMMMMMMMMMMMMW, .MMMMM
MMMMMO 'WMMMMK: ;NMMNNMMMMMMMMMMMMMMMMMd ,MMMMM
MMMMMk dW0l. .,OMM0ONMMMMMMMMMMMMMMMX :MMMMM
MMMMMx lXMMMMMMMMMMMMMMMMMMMMMMW' lMMMMM
MMMMMd ,ld0NMMMMMMMMMMMMMMMMMMMMo dMMMMM
MMMMMo ..'. .. ..;o0WMMMMMMMMM0 xMMMM
MMMMMo ;dKWMX00KXXXKkkWMMMMMMMMX. OMMMMM
MMMMMl ..,;;cxXMMMMMMMMMMMX. OMMMMM
MMMMMl .::cokKWMMMMMMMMMMMMO. OMMMMM
MMMMMc :MMMMMMMMMMMMMMMMMK; KMMMMM
MMMMMc . .NMMMMMMMMMMMMMKo. WMMMMM
MMMMM; cNMXOo:' ,NMMMMMMMMMMK, .MMMMMM
MMMMM, lXMMMMMMMMMX0OxoxWMMMMMMMMMMWO: ,MMMMMM
MMMMM. .oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk, :MMMMMM
MMMMM. .XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0. lMMMMMM
)MUJER";

}else{
cout << "Tienes que cargar combustible para irte del planeta";
}

cout << "Estamos aterrizando en el planeta Circia...\n";
cout << "Todo puede cambiar de forma, sus habitantes son los reyes de la metamorfosis.\n";
cout << "¿Quieres conocer lo profundo de tu realidad? (s/n): ";
cin >> letra;

if (letra == 's' || letra == 'S') 
{
cout << R"SER(
KKKKKKXXXXXXNNNXXXXXXXXXXXXKXXXXXXXXXXXXXXXXXXXXXXXXXKKKKKKKKKKKKKKKKKKKKKK
KKKKKKKKkkkxx00KNNNNXXXXXXXXXXXXXXXXXXXXXXXKKXXXXXXXXXXKXKKKKKKKKKKKKKKKKKK
KKKKXXX0x. . ,xdXNNNNXXXXXXXXXXkdkXXNNNXX..dXNNNNNNXXXXXXXXXXKKKKKKKKKKK
XXXXXXXXXXXKkkko .ONNNNNNNNNNNO. 'NNNNNX. oNNNNNNNNNKNNNXXXXXKKKKKKKKK
XXXXXXNNNNNNNNNNx. ;xXNNNNNNNNx ,NNNNNNx .NNNNNNd,.. .,xNXXXXKKKKKKKK
XXXNNNNNNNNXNNWWWNc cxNNNNNNNK. lNNWWWNNX .NNNWN, OXXXXKKKKKKKK
KkNNNNNN0l.':l0WWWWx kNWWWWNNK .NNNWWWNNN. ,NNWWx 0XXXXKKKKKKKK
XcxNNNNO 0WWWWX 0NWWWWNN: 0Nk,,oNNN. dNWWWK'. .;0NNNNXXXXXXXXK
XXclNNN. . dWWWNNo oxxxoood .XNk...XNK KNWWWWN0xdOKNNNNNNNNXXXXXXXK
XNNoc0Wc KWWWNNx . .;cc'.. ;XNNNNNNNNO ;XNNo,oWNNNNNNNNNNNNNNXXXXXXX
NNNo ,WNc 'xWWWWWNNxNNWWWWNNNNONNNNNNNNNNd XNW. ONNNNNXxl;,,;lolcc:;0X
NNN. NWNklodXNNWNWNNNNNNWWWNNNNNNNXXNNNNNNN.oNNNk'.cNNNXd. 'lc:cldxxkkXX
NN0 kNNNNNNNNNNNXKxKNWX0KNNNNNNNXXXNNNNNNd:NNNNNNNNNk, .:xNWNNNNNNXXXXXX
NNNk; cNNNNNNNNNNx'. .. ';xONNNNXXNNNNNdcNNxdKNNWd. .oKWWWNKKKNNNNNXXXXX
NNNNNN;cKNNNNNNNN: .ddxddxkxkcKNNNNNNNNNKckNNN. lNXc .0WWWWO;'. ;kNNNXXXX
XXNNNNc kNNNNNNN. 0N'.;..:,0NNNNNNNNNKXONNNNN0kNNl OWWWO. .. :NNXXXX
XXXNNNd NNNNNNO.kW0 l . xNNNNNNK; ,oNNNNNNNN, dWWWO .. .NNNXXX
XXXNNNX. kNNNNNN0WWN.'Kk ONNWWWd :NNNNNNX.cNNW0. . .KNNXXX 
XXNXNNNKl..xXNNNNNWWWXWW: .XNNWWW. xdl0k:kNNNNXX0NNNN0. .dNNNNXX
KXXXNNNNNN, 'cxXWWWWNNW. 'WNWWWWKokKxkNNNoXNNXXXNNNNNN0. .ONNNNXXX
KXXXNNNNNNN, .NNWNNNNK lNNWWNNNN. lNNXNNNNXNNNNNNNNXo...'.,kNNNNNNXXX
KXXXNNNNNNl lNNNNNNNc .0NNNNNNNk ONNNNNNNNNNNNNNNNNNWNNNNNNNNNNNNXXXXX
KXXXNNNNNNX. KNNNNNNN' xNNNNNNNNO.. ,KNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXX
XXXXNNNNNNd ;NNNNNNNXKOONNNNNNNNNNXXNNNNNNNNKclc,...cxKNNN0NNKNNNNNNXXXXX
XXXXXNNNNN' xNWWNNNNNNNNNNXXNNNNNNNXXNNNNNNN; 'l,cXlONNNNNXXXXX
XXXXNNNNNO XWWWWWNNNNNNNNNNNNNNXXXXNNNNNNNN ,;:lokKOdcc.;''dOKXxNXXXXX
XXXXNNNNNd 'WWWWWWWWWWNNNNNNNNNNNXXXXNNNNNNk 'NNWWWNNNNNNOo. .':;cNNNXXX
XXXXNNNNNl cWWW;c,,c0XKXNNNNNNNNNXXXXXNNNNN, kNWWWNNNNNNNNNXc: '.dXNNXXX
XXXXNNNNNd dWWl .:dKNNNNNNXXNNNNNNO .XNNNNNNNXXXXNNNNNNNc XNNXXXX
XXXNNNNNN: .OWN:kxdccclooodoccclNNNNNNNNNN: .NNNNNNNXXXXXXNXXXXXXlXXXXXXX
XXXXNNNNN' cXWWWWWNNNWWWNNNNNNNNNNNNNNNNo .oNNNNNNNXXXXXXXXXXXXXXXXXXXXXX
XXKKNNNNN, cNNNNNNNNNNNNNNNNNNNNNNNNNNNl '0NNNNNNNXXXXXXXXXXXXXXXXXXXXXX
XXXXXNNNN0c..dNNNNNNNXXXXNNNXXXXNNNNNNN0, .ONNNNNNNNXXXXXXXXXXXXXXXXXXXXXXX
XXXXNNNNNNNNNNXXXXXXXXXXXXXXXXXXXNNNNNl .xNNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXNNNNNNNXXXXXXXXXXXXXXXXXXXXNNNNk.'xNNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXNXl.:kXNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0;dXXXXNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXNXXXXXXNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
)SER";
int combustible;
cout << "Lo único que puede hacer es cargar combustible. Ingresa un número\n";
cin >> combustible;

// Decisión

if (combustible >= 6)
{
cout << "\nTenés suficiente combustible. ¡Podés continuar tu viaje interplanetario!\n\n\n";
}
else
{
cout << "\nNo podés continuar. Necesitás al menos 6 unidades de combustible.\n\n\n";
}

//Fin del planeta Circia
}
}
break;
}
case 4: {


cout << R"VIENVENIDA(
" *********************************************************************************[]*\n";
" *[]][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]*[]*\n";
" *[]******************************************************************************[]*\n";
" *[]* | _| _| _| _|_|_|_| _| _| _|_| *[]*\n";
" *[]* |_| _| _| _| _| _| _| _| _| *[]*\n";
" *[]* | _| _| _| _| _|_|_| _| _| _| _| *[]*\n";
" *[]* | _|_| _| _| _| _| _| _| _| *[]*\n";
" *[]* | _| _|_| _|_|_|_| _| _|_| *[]*\n";
" *[]* *[]*\n";
" *[]* _|_|_|_|_| _|_|_| _|_| _| _| _|_|_|_|_| _|_| _|_|_| *[]*\n";
" *[]* _| _| _| _| _| _|_| _| _| _| _| _| _| *[]*\n";
" *[]* _| _|_|_| _|_|_|_| _| _| _| _| _| _| _|_|_| *[]*\n";
" *[]* _| _| _| _| _| _| _|_| _| _| _| _| _| *[]*\n";
" *[]* _| _| _| _| _| _| _| _| _|_| _| _| *[]*\n";
" *[] *[]*\n";
" *[]******************************************************************************[]*\n";
" *[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]*\n";
" ************************************************************************************\n";

)VIENVENIDA";

cout << "\n===¡Bienvenidos al Nuevo Trantor- SPA GALÁCTICO STEAMPUNK === \n"
<< endl;
cout << "¡El planeta artificial creado para sus vacaciones!" << endl;
cout << "¡El lugar donde la tecnología y la naturaleza se encuentran!" << endl;


cout << R"PLANETA( 

___====-_ * _-====__\n";
_--^^#####// \\#####^^--\n";
_-^##########// (SPA GALÁCTICO) \\##########^-_\n";
-############// RELAX ZONE \\############-\n";
_/############// __ *****_ __\\############\_\n";
/#############(( /()\ |==| /()\ ))#############\\n";
-###############\\ \__/ | | \__/ //###############-\n";
-#################\\ |__| //#################-\n";
-###################\\_____STEAM-DOME____//###################-\n";
|#|-------- |#|-- OBSERVATORIO CELESTIAL--|#|----|#|-------|#|\n";
|#| () |#| __ 🌌 __ |#| () |#| () |#|\n";
|#| |#| /()\ GRAVEDAD /()\ |#| |#| () |#|\n";
/##\ / ##################### \ |#| () /###\\n";
/####\______/#######=NUEVO TRANTOR=##########\___ __/#####\\n";
/######\ \######| SPA & WELLNESS |#######/ /######\n";
|#######| \__|__________________|___/ GARDENS \ |#######|\n";
|#######| |__________________| 🌿🌿🌿 🌿🌿🌿 |#######|\n";
|#######| | __ ____ __ |___🌿🌿🌿 🌿🌿🌿 _ _ |#######|\n";
|#######| | |==||____||==| | HOT SPRINGS |#######|\n";
|#######| | |__||____||__| | 🌫️ 🌿 |#######|\n";
\#######\ CENTER DE REENERGIZACIÓN MECÁNICA /#######/\n";
\#######\___ _#⚙️====[||||||||||]====⚙️_____/#############/#######/\n";
\################################################################/\n";
\______________________________________________________________/\n";
/ \_____/ \_____/ \_____/ | | / \n";
\_*| ZONA NAVES VISITANTES |*[INGRESO]* RECEPCION |*EXIT*/\n";
\_/_____\__/_____\__/_____\___|_____________________ |_____/\n";
|______||_____||_____\_/_____||_____\_/_____||_____||_____|\n";
|______||_____||______|______||______|______||_____||_____|\n";
|______||_____||______|______||______|______||_____||_____|\n";
(__) (__) (__) (__) (__) (__) (__) (__)\n";
(__) (__) (__) (__) (__) (__) (__) \n";

)PLANETA";
// Recibimiento a los visitantes

cout << "¡Por favor, aterrice su nave en el lugar reservado a los visitantes!" << endl;
cout << "¡Todos los pasajeros deben descender e identificarse antes de ingresar al NUEVO TRANTOR" << endl;

cout << "Estimad@ visitante, Ingrese su nombre: ";
string nombre;
cin >> nombre;

cout << "Ingrese su edad: ";
int edad;
cin >> edad;
if (edad < 10)
{
cout << "Lo sentimos, no puede acceder a nuestros servicios." << endl;
return 0;
}

cout << "Felicitaciones, usted ha sido autorizad@ a ingresar al NUEVO TRANTOR";
cout << "Nuestros servicios de descanso y restablecimiento de su salud estan a su disposicion" << endl;
cout << "¿Desea conocer los planes?" << endl;
cout << "1. Plan de 1 semana" << endl;
cout << "2. Plan de 2 semanas" << endl;

cout << "Ingrese el plan que desea conocer (1 / 2): ";
int plan;
cin >> plan;
if (plan < 1 || plan > 2)
{
cout << "Plan no valido." << endl;
return 0;
}

cout << "El plan seleccionado es el " << plan << endl;

// Costo a pagar

cout << "*****Los costos del plan seran bonificados, si usted responde correctamente el cuestionario asignado*****\n";
cout << "********************Si no puede contestar la preguntas, debera volver a su planeta.***********************" << endl;

// Plan 1

if (plan == 1)
{

cout << "Para acceder a los beneficios del plan 1, Ud. debera contestar dos preguntas correctas sobre el Nuevo Planeta de Trantor" << endl;
cout << "Pregunta 1: ¿Cuál es el nombre del planeta artificial? ";
string respuesta1;
cin >> respuesta1;
if (respuesta1 != "El Nuevo Trantor")
{
cout << "Respuesta incorrecta. No puede acceder al plan." << endl;
return 0;
}
}
cout << "Pregunta 2: ¿Cuántas semanas tiene el plan más largo? ";
int respuesta2;
cin >> respuesta2;
if (respuesta2 != 2)
{
cout << "Respuesta incorrecta. No puede acceder al plan." << endl;
return 0;
}

cout << "¡Felicitaciones! Ha respondido correctamente las preguntas." << endl;

// que sea una constante a la que pueda llamar siempre...pero no tengo en claro como usarlo despues

// int const acertoRespuesta = 0;

cout << "¿Continua o desea volver a su nave? (continuar/volver): " << endl;
string decision;
cin >> decision;

if (decision == "continuar")
{
cout << "¡Gracias por continuar con su plan de Spa! Disfrute su estadía en El Nuevo Trantor." << endl;
}
else if (decision == "volver")
{
cout << "Gracias por visitarnos. Lo esperamos nuevamente." << endl;
}
else
{
cout << "Lamentamos que no hayamos satisfecho sus deseos. Por favor, no vuelva!!!." << endl;

return 0;
}

// Plan 2

if (plan == 2)
{

cout << "Para acceder a los beneficios del plan 2, Ud. debera contestar tres preguntas correctas sobre el Nuevo Planeta de Trantor" << endl;
cout << "Pregunta 3: ¿Cuantos animales son nativos de Trantor?" << endl;
int respuesta3;
cin >> respuesta3;

if (respuesta3 != 0)
{
cout << "Respuesta incorrecta. No puede acceder al plan." << endl;
return 0;
}

return 0;
}
cout << "Pregunta 4: ¿Cuántas semanas tiene el plan más corto? ";
int respuesta4;
cin >> respuesta4;
if (respuesta4 != 1)
{
cout << "Respuesta incorrecta. No puede acceder al plan." << endl;
return 0;
}

cout << "Pregunta 5: ¿Como se llamaba el planeta natural que fue reemplazado por Nuevo Trantor?";
string respuesta5;
cin >> respuesta5;
if (respuesta5 != "Trantor")
{
cout << "Respuesta incorrecta. No puede acceder al plan." << endl;
return 0;
}







break;
}
case 5:{
cout << "\n¡Buen viaje, comandante!\n";
return 0;

default:
cout << "Opción inválida. Intenta de nuevo.\n";
}
return 0; 
} 
// Agregué un return 0 para que el main tenga un final explícito.
}
}
