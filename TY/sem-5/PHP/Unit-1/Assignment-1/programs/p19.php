<!-- 19. Write a PHP script to find Armstrong numbers between 1 and 500.--> 
<?php
    echo "<h3>ArmStrong NUmber from 1to 500 as under: </h3>";
    for($a=1; $a<=500; $a++){
        $sum=0;
        $t=$a;
        $n=$a;
            while($n>0){
                $d=$n%10;
                $sum=$sum+($d*$d*$d);
                $n=(int)($n/10);
            }
            if($t==$sum){
                echo $t."<br>";
            }
    }				
?>