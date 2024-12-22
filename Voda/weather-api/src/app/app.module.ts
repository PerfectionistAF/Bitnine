import { NgModule } from '@angular/core';
import { BrowserModule, provideClientHydration, withEventReplay } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { SearchComponent } from './search/search.component';
import { WeatherListComponent } from './weather-list/weather-list.component';
import { WeatherCardComponent } from './weather-card/weather-card.component';

@NgModule({
  declarations: [
    AppComponent,
    SearchComponent,
    WeatherListComponent,
    WeatherCardComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [
    provideClientHydration(withEventReplay())
  ],
  bootstrap: [AppComponent]
})
export class AppModule { }
