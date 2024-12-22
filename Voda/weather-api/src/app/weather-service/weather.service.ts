import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';


//export the city interface
export interface City {
  id: number;
  city: string;
  forecast: {
    date: string;
    temperatureCelsius: number;
    temperatureFahrenheit: number;
    humidity: number;
  }[];
}

@Injectable({
  providedIn: 'root'
})

///add the routes here before designing the frontend
export class WeatherService {
  private base_url = './src';

  constructor(private http:HttpClient) { }

  getAllForecasts(): Observable<City[]> {
    return this.http.get<City[]>(`${this.base_url}/forecast`);
  }

  getCityIdForecast(cityId: number): Observable<City> {
    return this.http.get<City>(`${this.base_url}/cityForecast/${cityId}`);
  }
}
