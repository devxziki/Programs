<!-- 20. Write a PHP script to find prime numbers between 1 and 100. --> 
<?php
    echo "<h3>Prime Numbers As under: </h3>";
    for($a=1; $a<=100; $a++){
        $isprime=true;
            if($a<=1){
                $isprime=false;
            }

            for($i=2; $i<$a;$i++){
                if($a%$i==0){
                    $isprime=false;
                        break;
                }
            }

            if($isprime){
                echo $a."<br>";
            }
    }
    
?>