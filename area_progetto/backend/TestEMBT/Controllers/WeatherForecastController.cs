using Microsoft.AspNetCore.Mvc;

namespace TestEMBT.Controllers;

[ApiController]
[Route("[controller]")]
public class WeatherForecastController : ControllerBase
{
    private static readonly string[] Summaries = new[]
    {
        "Freezing", "Bracing", "Chilly", "Cool", "Mild", "Warm", "Balmy", "Hot", "Sweltering", "Scorching"
    };

    private readonly ILogger<WeatherForecastController> _logger;

    public WeatherForecastController(ILogger<WeatherForecastController> logger)
    {
        _logger = logger;
    }

    [HttpGet("GetWeatherForecast/{pippo}")]
    public IEnumerable<WeatherForecast> Get([FromRoute] string pippo)
    {
        return Enumerable.Range(1, 50).Select(index => new WeatherForecast
        {
            Date = DateOnly.FromDateTime(DateTime.Now.AddDays(index)),
            TemperatureC = Random.Shared.Next(-20, 55),
            Summary = pippo
        })
        .ToArray();
    }

    [HttpGet("GetData")]
    public IEnumerable<string> GetData()
    {
        return System.IO.File.ReadAllLines("C:\\Users\\Alex8\\source\\repos\\TestEMBT\\TestEMBT\\sensore1.txt");
    }
}
