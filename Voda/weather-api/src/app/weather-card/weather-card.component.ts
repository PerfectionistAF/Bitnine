import { Component, Input } from '@angular/core';
import { City } from '../weather-service/weather.service';

@Component({
  selector: 'app-weather-card',
  standalone: false,
  
  templateUrl: './weather-card.component.html',
  styleUrl: './weather-card.component.css'
})

export class WeatherCardComponent {
  @Input() city!: City;
  @Input() unit: 'Celsius' | 'Fahrenheit' = 'Celsius';
}