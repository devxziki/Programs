<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value for Switch Case: </h3>
                <h4>1=red</h4>
                <h4>2=blue</h4>
                <h4>3=black</h4>
				<input type="text" name="no1">
                <input type="submit" name="switch" value="Check">			
			</form>
			    <?php
				    if(isset($_POST['switch'])){
					    $a=$_POST['no1'];
                            switch($a){
                            case 1:
                                echo "1 <br> red";
                                break;

                            case 2:
                                echo "2 <br> blue";
                                break;

                            case 3:
                                echo "3 <br> black";
                                break;

                            default:
                                echo "Choose Valid Condition";
                                break;					
                        }
				    }
			    ?>
		</body>
</html>