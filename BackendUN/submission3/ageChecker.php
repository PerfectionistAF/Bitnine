<?php
$date = "18 Sep 2001";  #defined
#echo date("d /m/ Y" ,strtotime($date));
#echo "<br>";
$ammend = date_diff(date_create($date), date_create('now'))->y;
##################################################################
$years = date("Y" ,strtotime($date));
$months = date("m" ,strtotime($date));
$days = date("d" ,strtotime($date));
$presentyears = date("Y");
$presentmonths = date("m");
$presentdays = date("d");
#echo $years;
#echo"<br>";
$age_years = $age_months = $age_days = "";
function ageChecker($years, $months, $days, 
$presentyears, $presentmonths, $presentdays){
  $month_array = array(31, 28, 31, 30, 31, 30,
  31, 31, 30, 31, 30, 31);

  if($days > $presentdays){
    $presentdays = $presentdays + $month_array[$months - 1];
    $presentmonths = $presentmonths - 1;
  }
  if($months > $presentmonths){
    $presentyears = $presentyears - 1;
    $presentmonths = $presentmonths + 12;
  }
  $age_days = $presentdays - $days;
  $age_months = $presentmonths - $months;
  $age_years = $presentyears - $years;
  return $age_years;
}
$age_years = ageChecker($years, $months, $days, $presentyears, $presentmonths, $presentdays); 
#echo"<br>";
if ($age_years < 22){
  $alert = "alert-danger";
  $content = "<strong>Danger, invalid age!</strong> Age doesn't exist";
}
elseif ($age_years <= 25){
  $alert = "alert-success";
  $content = "<strong>Success, your age is between 22 and 25!</strong> $age_years years old";
}
elseif ($age_years <= 30){
  $alert = "alert-success";
  $content = "<strong>Success, your age is between 26 and 30!</strong> $age_years years old";
}
elseif ($age_years <= 40){
  $alert = "alert-success";
  $content = "<strong>Success, your age is between 31 and 40!</strong> $age_years years old";
}
elseif ($age_years > 40){
  $alert = "alert-success";
  $content = "<strong>Success, your age is greater than 40!</strong> $age_years years old";
}
#DRY CODE
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <title>Bootstrap Example</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.4/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
</head>
<body>

<div class="container">
  <h2>Alerts</h2>
  <div class="alert <?php echo $alert;?>">
    <?php echo $content;?>
  </div>
</div>

</body>
</html>