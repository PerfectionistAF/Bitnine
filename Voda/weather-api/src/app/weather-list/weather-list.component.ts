import { Component, OnInit } from '@angular/core';
import { WeatherService, City } from '../weather-service/weather.service';


@Component({
  selector: 'app-weather-list',
  standalone: false,
  
  templateUrl: './weather-list.component.html',
  styleUrl: './weather-list.component.css'
})
export class WeatherListComponent implements OnInit {
  cities: City[] = [];
  filteredCities: City[] = [];
  unit: 'Celsius' | 'Fahrenheit' = 'Celsius';

  constructor(private weatherService: WeatherService) {}

  ngOnInit(): void {
    this.weatherService.getAllForecasts().subscribe((data) => {
      this.cities = data;
      this.filteredCities = data;
    });
  }

  filterCities(searchTerm: string, date?: string): void {
    this.filteredCities = this.cities.filter((city) => {
      const matchesCity = city.city.toLowerCase().includes(searchTerm.toLowerCase());
      const matchesDate = date
        ? city.forecast.some((forecast) => forecast.date === date)
        : true;
      return matchesCity && matchesDate;
    });
  }

  toggleUnit(unit: 'Celsius' | 'Fahrenheit'): void {
    this.unit = unit;
  }
  
}
