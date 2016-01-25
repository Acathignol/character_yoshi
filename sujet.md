TP Polymorphisme
================

1) Ajout d'un attribut de classe
---------------------------------

### a. Ajouter une variable de classe (e.g. nb_instances) à Character et à Yoshi pour compter les instances de ces classes

### b. Corrigez les fuites mémoire ainsi identifiées


2) Méthodes virtuelles pures et classes abstraites
----------------------------------------------------

### a. Ajoutez une méthode virtuelle pure void WhatAmI() dans la classe Character

### b. Supprimez toutes les instanciations de la classe Character (à ce stade, il ne vous reste donc plus que 3 personnages)

### c. Surchargez la méthode void WhatAmI() dons la classe Yoshi. Cett méthode écrira "Yoshi" sur la sortie standard


3) Attribut spécifique à une classe dérivée et enum
------------------------------------------------------

### a. Ajoutez un attribut int colour_ à Yoshi

### b. modifiez void WhatAmI() pour avoir e.g. "Green Yoshi"

### c. Tranformez l'attribut int colour_ en Colour colour_ (Colour étant une enum)


4) Allocation manuelle
------------------------

### a. Faites passer speed_ en allocation manuelle

### b. Vérifiez que vous n'avez pas introduit de fuite mémoire


5) Création d'une autre classe dérivée
-----------------------------------------

### a. Si vous ne l'avez pas encore fait, rendez la méthode Break de Character polymorphe

### b. Faites en sorte que Yoshi utilise le freinage par défaut

### c. Créez une nouvelle classe Mario qui a une accélération par défaut et un freinage plus efficace que le défaut


6) Collections d'objets
--------------------------

### a. Dans le programme principal, faite en sorte d'avoir, en tout et pour tout, 2 instances de Yoshi et 2 de Mario, toutes les 4 allouées sur le tas.

### b. Chaque personnage doit effectuer 10 accélérations puis 10 freinages. Écrivez dans un fichier les séries temporelles correspondantes (1 ligne correspond à un pas de temps)

### c. Mettez tous vos personnages dans un std::vector<Character*>, utilisez les itérateurs pour parcourir la liste

### d. Décidez d'opter pour une std::list<Character*> au lieu du vector, que constatez-vous ?

### e. Essayez d'utiliser un range-based for avec le mot-clé auto
