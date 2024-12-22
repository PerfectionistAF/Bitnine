import { Component, OnInit } from '@angular/core';
import { WeatherServiceService } from './services/weather-service.service';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  standalone: false,
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'my-app';
  
  city: string = '';
  //date: string | undefined;
  //temperatureCelsius: number = 0;
  //temperatureFahrenheit: number = 0;
  //humidity: number = 0;

  forecasts: any[] = [];  ///array of forecasts per city

  constructor(private weatherService: WeatherServiceService) {}

  ngOnInit() {
    this.getCityForecast(9); //Test with ids
  }

  getCityForecast(cityId: number) {
    this.weatherService.getCityForecast(cityId).subscribe(
      data => {
        this.city = data.city;
        this.forecasts = data.forecast;
        //const firstForecast = data.forecast;//[0];
        //this.date = firstForecast[0].date;
        //this.temperatureCelsius = firstForecast[0].temperatureCelsius;
        //this.temperatureFahrenheit = firstForecast[0].temperatureFahrenheit;
        //this.humidity = firstForecast[0].humidity;
      },
      error => {
        console.error('Error fetching city forecast', error);
      }
    );
  }

}
