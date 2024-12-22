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
  date: string | undefined;
  temperatureCelsius: number = 0;
  temperatureFahrenheit: number = 0;
  humidity: number = 0;

  constructor(private weatherService: WeatherServiceService) {}

  ngOnInit() {
    this.getCityForecast(5); //Test with ids
  }

  getCityForecast(cityId: number) {
    this.weatherService.getCityForecast(cityId).subscribe(
      data => {
        this.city = data.city;
        const firstForecast = data.forecast[0];
        this.date = firstForecast.date;
        this.temperatureCelsius = firstForecast.temperatureCelsius;
        this.temperatureFahrenheit = firstForecast.temperatureFahrenheit;
        this.humidity = firstForecast.humidity;
      },
      error => {
        console.error('Error fetching city forecast', error);
      }
    );
  }

}
